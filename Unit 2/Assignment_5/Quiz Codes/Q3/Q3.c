/*
 * Q3.c
 *
 *  Created on: Jan 30, 2023
 *      Author: DaNil
 */

#include <stdio.h>

void main (void)
{
    int array [10];
    int n ;
    printf("please enter the length of the array: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&n);

    printf("enter the array numbers :");
    fflush(stdin); fflush(stdout);
    for ( int i= 0 ; i<n ; i++)
	{
        scanf("%d",&array[i]);
	}
    for ( int i=(n-1) ; i>=0 ; --i)
	{
        printf("%d ",array[i]);
	}


}
