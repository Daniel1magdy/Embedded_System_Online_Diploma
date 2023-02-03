/*
 * Mid_Q4.c
 *
 *  Created on: Feb 3, 2023
 *      Author: DaNil
 */


#include<stdio.h>

void main (void)
{
	int x  ,z ;

	printf("please enter the Number :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	for(int i = 0 ; x!= 0 ; i++)
	{
		z = x%10;
		printf("%d",z);
		x=x/10;
	}
}

