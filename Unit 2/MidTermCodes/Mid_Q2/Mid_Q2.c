/*
 * Mid_Q2.c
 *
 *  Created on: Feb 3, 2023
 *      Author: DaNil
 */

#include<stdio.h>
#include<math.h>

float func (int A);
void main (void)
{
	int x ;
	float y ;
	printf("please enter the number :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	y =func(x);
	printf("the result is %f",y);
}

float func (int A)
{
	float z;
	z = pow(A,0.5);
	return z ;
}
