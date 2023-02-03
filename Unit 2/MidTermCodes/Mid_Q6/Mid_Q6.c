/*
 * Mid_Q6.c
 *
 *  Created on: Feb 3, 2023
 *      Author: DaNil
 */

#include<stdio.h>
void uniquefun(int array[], int n);
void main (void)
{
	int x  ,i , count = 0 ;
	int array[20];
	printf("please enter the array size :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	printf("please enter the array Numbers separated with spaces :");
	fflush(stdin); fflush(stdout);
	for (int i=0 ; i<x ; i++)
		{
		scanf("%d",&array[i]);
		}
	uniquefun(array , x);

}
void uniquefun(int array[], int n)
{
		int i=0,j=0,count=0;
		for ( i=0;i<n;i++)
		{
			count=0;
			for(j=0;j<n;j++)
			{
				if(i!=j)
				{
					if(array[i]==array[j])
						count++;
				}

			}
			if (count==0)
				printf("the unique number: %d",array[i]);

		}

}

