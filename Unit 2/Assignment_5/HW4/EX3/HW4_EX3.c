/*
 * HW4_EX3.c
 *
 *  Created on: Jan 24, 2023
 *      Author: DaNil
 */

#include <stdio.h>


void Reverse_Function(void);

void main (void)
{
	printf("please enter the sentence " );
	fflush(stdin); fflush(stdout);
	Reverse_Function();

}

void Reverse_Function(void)
{
	char x ;
	scanf("%c",&x);
	if (x!='\n')
	{
		Reverse_Function();
		printf("%c",x);
	}
}
