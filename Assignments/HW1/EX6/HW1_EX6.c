/*
 * HW1_EX6.c
 *
 *  Created on: Jan 15, 2023
 *      Author: DaNil
 */

#include<stdio.h>

void main (void)
{
	float x, y, Temp ;
	printf("Enter the value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);

	printf("Enter the value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&y);
	Temp = x ;
	x = y ;
	y = Temp ;

	printf("After swapping the value of a is : %.2f \n", x);
	printf("After swapping the value of b is : %.2f", y);



}

