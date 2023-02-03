/*
 * Mid_Q5.c
 *
 *  Created on: Feb 3, 2023
 *      Author: DaNil
 */

#include<stdio.h>

void main (void)
{
	int x  ,z , count  = 0 ;

	printf("please enter the Number :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	printf("number of ones in %d equals ",x );
	for(int i = 0 ; x!= 0 ; i++)
	{
		z = x%2;
		if (z==1)
			count++ ;
		x=x/2;
	}
	printf("%d",count );
}

