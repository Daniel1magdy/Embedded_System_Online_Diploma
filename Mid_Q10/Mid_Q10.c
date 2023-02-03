/*
 * Mid_Q10.c
 *
 *  Created on: Feb 3, 2023
 *      Author: DaNil
 */

#include <stdio.h>
#include <string.h>

void main (void)
{
	int x;

	printf("please enter a number ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	int count=0;
	int b=0;
	int i;
	for(i=0;i<32;i++)
	{
		if(x&(1<<i))
			{
			count++;
			if(count>b)
				b=count;
			}
		else
			count=0;

	}
	printf("the number of ones equal %d",b);

}



