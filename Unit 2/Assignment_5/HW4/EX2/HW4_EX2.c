/*
 * HW4_EX2.c
 *
 *  Created on: Jan 24, 2023
 *      Author: DaNil
 */
#include <stdio.h>

int Factorial (int x);

void main (void)
{
	int num1 ,result  ;
	printf("please enter a positive number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num1);
	result = Factorial(num1);
	printf("The Factorial is : %d",result);
}

int Factorial (int x )
{

	if (x!=1)
	{
		return x * Factorial (x-1) ;
	}
	else
		return 1 ;
}

