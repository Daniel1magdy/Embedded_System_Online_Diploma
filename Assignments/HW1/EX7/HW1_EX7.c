/*
 * HW1_EX7.c
 *
 *  Created on: Jan 15, 2023
 *      Author: DaNil
 */

// swap 2 numbers with two ways without temp variables

#include<stdio.h>

void main (void)
{
//	float x, y ;
//	printf("Enter the value of a: ");
//	fflush(stdin); fflush(stdout);
//	scanf("%f",&x);
//
//	printf("Enter the value of b: ");
//	fflush(stdin); fflush(stdout);
//	scanf("%f",&y);
//	x = x + y ;
//	y = x - y ;
//	x = x - y ;
//	printf("After swapping the value of a is : %.2f \n", x);
//	printf("After swapping the value of b is : %.2f", y);

	int x, y ;
	printf("Enter the value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	printf("Enter the value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&y);
	x = x ^ y ;
	y = x ^ y ;
	x = x ^ y ;
	printf("After swapping the value of a is : %d \n", x);
	printf("After swapping the value of b is : %d", y);



}
