/*
 * HW3_EX7.c
 *
 *  Created on: Jan 20, 2023
 *      Author: DaNil
 */

#include <stdio.h>
void main(void)
{
	char text[60] ;
	int i ,n= 0  ;
	char x ;

	printf("please enter the string :");
	fflush(stdin); fflush(stdout);
	gets(text);

	for (i=0;i<60;i++)
	{
		if (0==(text[i]))
			break;
		n=n+1 ;
	}
	printf("The length of the string is %d characters ", n );
	}

