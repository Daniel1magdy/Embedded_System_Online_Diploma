/*
 * Mid_Q1.c
 *
 *  Created on: Feb 3, 2023
 *      Author: DaNil
 */

#include<stdio.h>

void main (void)
{
	int x ,y=0 ,z =0 ;

	printf("please enter the number :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	printf("The sum of digits for %d equals",x);
	for (int i = 0; x!= 0 ; i++)
	{
		y=x%10;
		z=z+y ;
		x=x/10;
	}
	printf(" %d",z);


}
