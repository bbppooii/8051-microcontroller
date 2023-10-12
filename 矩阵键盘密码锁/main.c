#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.h"
#include "Matrixkey.h"
unsigned char Keynum;
unsigned int Password,Count;
void main()
	{
		LCD_Init();
		LCD_ShowString(1,1,"Password:");
	while(1)
		{
			Keynum=Matrixkey();
			if(Keynum)
			{
				if(Keynum<=10)
				{
					if(Count<4)
					{
						Password*=10;
						Password+=Keynum%10;
						Count++;
					}
					LCD_ShowNum(2,1,Password,4);
				}
				if(Keynum==11)
				{
					Password=0;
					Count=0;
					LCD_ShowNum(2,1,Password,4);
				}
				if(Keynum==12)
				{
					if(Password==1234){
						
						LCD_ShowString(1,10,"OK   ");
						Password=0;
						Count=0;
						LCD_ShowNum(2,1,Password,4);}
					else {
						
						LCD_ShowString(1,10,"error");
						Password=0;
						Count=0;
						LCD_ShowNum(2,1,Password,4);}
				}
			}
		} 
	}