#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.h"
#include "Matrixkey.h"
unsigned char Keynum;
void main()
	{
		LCD_Init();
		LCD_ShowString(1,1,"Matrixkey:");
	while(1)
		{
			Keynum=Matrixkey();
			if(Keynum)
			{
				LCD_ShowNum(2,1,Keynum,2);
			}
		}
	}