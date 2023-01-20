/*
 * HW3_EX4.c
 *
 *  Created on: Jan 20, 2023
 *      Author: DaNil
 */


#include <stdio.h>
void main(void)
{
	int array[20] ;
	int i ,n ,z,y ;

	printf("please enter the number of elements :");
	fflush(stdin); fflush(stdout);
	scanf ("%d",&n);

	printf("Your array is : \n");
	for (i=0;i<n;i++)
	{
		array[i] = (i+1);
		printf("%d ", i+1);
	}

	printf("\nPlease enter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf ("%d",&z);
	printf("Please enter the location of the element  : ");
	fflush(stdin); fflush(stdout);
	scanf ("%d",&y);

	for (i=0;i<n;i++)
		{
			if (y==(i+1))
				array[i] = z ;
		}

	printf("The array after editing is :\n");
	for (i=0;i<n;i++)
			{
				printf("%d " , array[i]);
			}
}

