/*
 * HW2_EX3.c
 *
 *  Created on: Jan 15, 2023
 *      Author: DaNil
 */

#include<stdio.h>

void main (void)
{
	float x , y ,z ;
	printf("Please enter the values of the three numbers  :\n");
	fflush(stdin); fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);

	if((x > y) && (x > z))
	{
		printf("Largest number is %.2f",x);
	}
	if((y > x) && (y > z))
	{
		printf("Largest number is %.2f",y);
	}
	if((z > x) && (z > y))
	{
		printf("Largest number is %.2f",z);
	}

}

