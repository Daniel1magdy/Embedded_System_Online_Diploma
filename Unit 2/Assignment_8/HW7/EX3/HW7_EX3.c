/*
 * HW7_EX3.c
 *
 *  Created on: Feb 2, 2024
 *      Author: DaNil
 */

#include <stdio.h>

void main (void)
{

	char array[20];
	char *pointer=array;
	printf("Please enter the data : ");
	fflush(stdin); fflush(stdout);
	//scanf("%s",array);
	gets(array);
	int x = strlen(array);
	pointer =pointer+x-1;
	for(int i = x;i>=0 ;i--)
	{
		printf("%c",*pointer);
		pointer--;

	}


}
