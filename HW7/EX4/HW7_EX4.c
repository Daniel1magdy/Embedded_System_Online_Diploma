/*
 * HW7_EX4.c
 *
 *  Created on: Feb 2, 2024
 *      Author: DaNil
 */


#include <stdio.h>

void main (void)
{
	unsigned int a;
	int array[15];
	int *pointer=array;
	printf("Please enter the number of elements (max 15) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	fflush(stdin); fflush(stdout);

	printf("Please enter %d elements : \n",a);

	for(int i =0 ;i<a ;i++)
	{
		printf("element (%d) : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",pointer);
		pointer++;

	}
	pointer=&array[a-1];
	printf("Elements in reverse order : \n");

	for(int i =a ;i>0 ;i--)
	{
		printf("element (%d) = %d\n",i,*pointer);
		pointer--;

	}


}
