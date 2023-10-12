#include <REGX52.H>
void ms(unsigned int xms)	
{
	while(xms--){
	unsigned char data i, j;

	i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
	}
	
}
void main(){
	unsigned char a=0;
		P2=~0x01;
	while(1){
	   if(P3_1==0){
		   ms(20);
		   while(P3_1==0);
		   ms(20);
			 a++;
			 if(a>=8){a=0;}
			 P2=~(0x01<<a);
		 }
		 if(P3_0==0){
		   ms(20);
		   while(P3_0==0);
		   ms(20);
			 if(a==0){a=7;}
			 else 
				 a--;
			 P2=~(0x01<<a);
		 }
	}

}