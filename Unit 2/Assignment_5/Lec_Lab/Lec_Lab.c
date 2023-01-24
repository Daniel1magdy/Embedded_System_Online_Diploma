/*
 * Lec_Lab.c
 *
 *  Created on: Jan 25, 2023
 *      Author: DaNil
 */

#include <stdio.h>
void function(void);
void main (void)
{

	function();

}

void function(void)
{
	int i , j= 0 , k = 0;
	for (i= 9 ; i>=0 ; i--)
	{
		for (j = k ;j<=9 ; j++)
			{
				printf("%d ",j);
			}
		printf("\n");
		k++ ;


	}

}
