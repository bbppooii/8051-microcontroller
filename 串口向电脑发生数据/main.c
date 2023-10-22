#include <REGX52.H>
#include "Delay.h"
#include "UART.h"
unsigned char sec;
void main(){
	while(1){
		UartInit();
	UART_SendByte(sec);
		sec++;
		Delay(1000);
	}
}