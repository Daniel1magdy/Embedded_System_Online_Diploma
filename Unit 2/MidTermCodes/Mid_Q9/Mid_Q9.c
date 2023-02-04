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
	int x , count1=0;
	char array[20], temparray[20];

	printf("please enter the string: ");
	fflush(stdin); fflush(stdout);
	gets(array);

	x = strlen(array);

	for (int i =0 ; i < x ; i++)
	{
		count1++;
		if(array[i]==' ')
		{
			for(int j =0;j<(count1-1);j++)
			{
				temparray[j]=array[j];
			}
			for(int k = count1; k<x;k++)
			{
				printf("%c",array[k]);
			}
			printf(" ");
			for(int j =0;j<(count1-1);j++)
			{
				printf("%c",temparray[j]);
			}

		}

	}
}


