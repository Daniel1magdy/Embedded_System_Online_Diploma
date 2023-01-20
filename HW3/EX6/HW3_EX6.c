/*
 * HW3_EX6.c
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
	gets(&text[0]);

	printf("please enter a character to find its frequency :");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);


	for (i=0;i<strlen(text);i++)
	{
		if (x==(text[i]))
			n=n+1;
	}
	printf("The frequency of %c in the string is: %d",x , n );
	}
