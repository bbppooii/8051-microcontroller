#include <REGX52.H>
void ms(unsigned int xms){
		unsigned char data i, j;
	while(xms--){
	i = 2;
	j = 239;
	do{while (--j);} 
	while (--i);
	}
}
void main(){
unsigned char A=0;
	while(1){
	if(P3_1==0){
		ms(20);
		while(P3_1==0);
		ms(20);
		A++;
		P2=~A;
	}
	} 
}