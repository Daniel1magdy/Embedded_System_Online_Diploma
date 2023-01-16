/*
 * HW2_EX6.c
 *
 *  Created on: Jan 16, 2023
 *      Author: DaNil
 */

#include<stdio.h>

void main (void)
{
	int n ,result = 0 ;
	printf("Please enter the number  :\n");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n );

	for (int i = 1 ; i <= n ; i++)
	{
		result = result + i ;

	}

	printf("The summation of the numbers is %d",result);


}



