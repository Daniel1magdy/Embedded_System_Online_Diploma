/*
 * HW3_EX8.c
 *
 *  Created on: Jan 20, 2023
 *      Author: DaNil
 */
#include <stdio.h>
void main(void)
{
	char text[30] ;
	char temparray[30] ;
	int i , j = 0 , n ;


	printf("please enter the string :");
	fflush(stdin); fflush(stdout);
	gets(text);
	n = strlen(text);

	for (i=n;i>0;i--)
	{
		temparray[j++]= text[i-1];
	}
	printf("The string reverse is: %s ",temparray);
	}


