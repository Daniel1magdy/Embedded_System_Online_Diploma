/*
 * HW2_EX1.c
 *
 *  Created on: Jan 15, 2023
 *      Author: DaNil
 */


#include<stdio.h>

void main (void)
{
	int x , result = 0;
	printf("Please enter the value you want to check : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	result = x % 2 ;
	if(result == 0)
	{
		printf("%d is even",x);
	}
	else if (result == 1)
	{
		printf("%d is odd",x);
	}
	else
		printf("Wrong number");

}
