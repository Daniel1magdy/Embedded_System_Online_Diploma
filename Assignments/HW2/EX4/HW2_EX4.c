/*
 * HW2_EX4.c
 *
 *  Created on: Jan 15, 2023
 *      Author: DaNil
 */


#include<stdio.h>

void main (void)
{
	int x ;
	printf("Please enter the number  :\n");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x );

	if(x>0)
	{
		printf("%d is positive",x);
	}
	else if(x<0)
	{
		printf("%d is negative",x);
	}
	else
		printf("You entered zero");

}


