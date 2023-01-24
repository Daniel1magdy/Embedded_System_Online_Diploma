/*
 * HW4_EX1.c
 *
 *  Created on: Jan 24, 2023
 *      Author: DaNil
 */

#include <stdio.h>

void Prime_Function (int x , int y);

void main (void)
{
	int num1 , num2 ;
	printf("please enter the two interval numbers between 0 and 100 : ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&num1,&num2);
	Prime_Function(num1,num2);
}

void Prime_Function (int x , int y)
{
	int prime_Number[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	int i , j;
	printf("prime numbers between %d and %d are: \n",x,y);
	for (i = x; i<= y ; i++)
	{
		for (j = 0; j<25 ; j++)
			{
				if (prime_Number[j] == i)
					printf ("%d ",i);
			}
	}
}
