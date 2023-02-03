/*
 * Mid_Q9.c
 *
 *  Created on: Feb 3, 2023
 *      Author: DaNil
 */


#include <stdio.h>
#include <string.h>

void main (void)
{
	int x ;
	char array[20];

	printf("please enter the string: ");
	fflush(stdin); fflush(stdout);
	gets(array);

	x = strlen(array);

	for (int i = x-1; i>=0 ; i-- )
		{
		printf("%c",array[i]);
		}

}


