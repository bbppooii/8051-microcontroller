#include <REGX52.H>
#include "LCD1602.h"
void main()
	{
		int qwe=0;
	while(1)
		{
		LCD_Init();
		qwe++;
		LCD_ShowNum(1,1,qwe,3);
		}
	}