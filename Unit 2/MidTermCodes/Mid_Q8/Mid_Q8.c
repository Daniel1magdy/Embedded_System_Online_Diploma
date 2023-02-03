/*
 * Mid_Q8.c
 *
 *  Created on: Feb 3, 2023
 *      Author: DaNil
 */


#include <stdio.h>

void main (void)
{
	int x ;
	int array [20];
	printf("please enter the array length ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	printf("please enter the array numbers with commas ");
	fflush(stdin); fflush(stdout);
	for (int i = 0; i<x ; i++ )
		{
		scanf("%d,",&array[i]);
		}

	for (int i = x-1; i>=0 ; i-- )
		{
		printf("%d ",array[i]);
		}

}


