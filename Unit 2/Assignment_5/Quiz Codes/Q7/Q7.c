/*
 * Q7.c
 *
 *  Created on: Jan 30, 2023
 *      Author: DaNil
 */
#include <stdio.h>

void main (void)
{
    int x ;
    printf("please enter a number : ");
    fflush(stdin); fflush(stdout);

    scanf("%d",&x);
	int i ;
	for (i= 1 ; i<=100000 ; i*=3)
	{
		if ((3*i)==x)
        {
            printf("0");
            break;

        }

	}
    if (i>100000)
        printf("1");

}

