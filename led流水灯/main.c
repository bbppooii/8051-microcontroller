#include <REGX52.H>
#include <INTRINS.H>
void Delay500ms(unsigned int xms)		//@12.000MHz
{
	unsigned char  i, j;
	while(xms){
	i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
	xms--;
	}
}


void main()
{
	while(1)
	{
		P2=0xFE;
		Delay500ms(10);
		P2=0xFD;
		Delay500ms(10);
		P2=0xFB;
		Delay500ms(10);
		P2=0xF7;
		Delay500ms(10);
		P2=0xEF;
		Delay500ms(10);
		P2=0xDF;
		Delay500ms(10); 
		P2=0xBF;
		Delay500ms(10);
		P2=0x7F;
		Delay500ms(10);
	}
}