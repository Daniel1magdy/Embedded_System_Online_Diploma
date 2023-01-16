/*
 * HW1_EX4.c
 *
 *  Created on: Jan 15, 2023
 *      Author: DaNil
 */



#include<stdio.h>

void main (void)
{
	float x, y, Mul ;
	printf("Enter the first number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);

	printf("Enter the second number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&y);
	Mul = x*y ;
	printf("The product of %f and %f is : %f  " , x , y , Mul );


}
