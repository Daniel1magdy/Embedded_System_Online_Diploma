#include "uart.h"

#define UART0DR *((volatile unsigned int * const)((unsigned int *)0x101f1000))

void UART_SEND_STRING(unsigned char * Px)
{
	while(*Px != '\0')
	{
		UART0DR=(unsigned int)*Px;
		Px++; 
	}	
}