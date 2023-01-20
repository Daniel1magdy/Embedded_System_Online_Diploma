/*
 * HW3_EX2.c
 *
 *  Created on: Jan 20, 2023
 *      Author: DaNil
 */


#include <stdio.h>

void main(void)
{
	float array[50] ;
	float sum = 0 ;
	int i , j , n ;
	float average ;

	printf("enter the number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);


	for (i=0;i<n;i++)
	{
			printf(" please enter number %d :",i+1);
			fflush(stdin); fflush(stdout);
			scanf ("%f",&array[i]);
			sum = sum + array[i];

		}
	average = sum/n ;
	printf(" the average is : %f ", average);
	}
