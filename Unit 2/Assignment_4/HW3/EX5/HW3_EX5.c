/*
\ * HW3_EX5.c
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

	printf("Your array is :\n");
	for (i=0;i<n;i++)
	{
		array[i] = (i+1)*11;
		printf("%d ", (i+1)*11);
	}

	printf("\nPlease enter the element to be searched: ");
	fflush(stdin); fflush(stdout);
	scanf ("%d",&z);


	for (i=0;i<n;i++)
		{
			if (array[i]==z)
				printf("The location of the number is : %d",(i+1));
		}
}



