
#include "uart.h"

unsigned char string_buffer[100] = "Learn-In-Depth:Daniel-Magdy" ;

void main (void)
{
	UART_SEND_STRING(string_buffer);
}