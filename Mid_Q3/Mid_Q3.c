/*
 * Mid_Q3.c

 *
 *  Created on: Feb 3, 2023
 *      Author: DaNil
 */

#include<stdio.h>

void main (void)
{
	int x ,y ,count = 0 ;

	printf("please enter the two numbers :");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&x,&y);

	for (int i = x ;i <= y ; i++)
	{
		for(int a= i-1 ; a>1 ; a--)
		{
			if(i%a!=0)
				count++ ;

		}
		if (count==(i-2))
		{
			printf("%d ",i);
		}
		count = 0 ;

	}
}

