/*
 * HW2_EX5.c
 *
 *  Created on: Jan 15, 2023
 *      Author: DaNil
 */


#include<stdio.h>

void main (void)
{
	char x ;
	printf("Please enter the Alphabet  :\n");
	fflush(stdin); fflush(stdout);
	scanf("%c", &x );

	if(((x>=65)&&(x<=90))||((x>=97)&&(x<=122)))
	{
		printf("%c is Alphabet",x);
	}

	else
		printf("%c is not Alphabet",x);

}