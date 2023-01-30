/*
 * Q5.c
 *
 *  Created on: Jan 30, 2023
 *      Author: DaNil
 */

#include <stdio.h>

void main (void)
{
    int x , y, result;
    printf("enter the number :");
    fflush(stdin); fflush(stdout);

    scanf("%d",&x);

    printf("enter the bit position :");
    fflush(stdin); fflush(stdout);

    scanf("%d",&y);

    result = x&~(1<<y) ;
    printf("The result is : %d ",result);
}

