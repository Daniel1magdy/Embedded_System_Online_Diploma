/*
 * HW3_EX3.c
 *
 *  Created on: Jan 20, 2023
 *      Author: DaNil
 */

#include <stdio.h>

void main(void)
{
	float array[50][50] ;
	int i , j , n , m;
	printf("please enter the number of rows and columns respectively :\n");
	fflush(stdin); fflush(stdout);
	scanf ("%d%d",&n,&m);

	printf("please enter the Matrix numbers :\n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf("Matrix [%d][%d] :", (i+1),(j+1));
			fflush(stdin); fflush(stdout);
			scanf ("%f",&array[i][j]);
		}
	}
	printf("The Matrix you entered is : \n");
	for (i=0;i<n;i++)
		{
			for (j=0;j<m;j++)
			{
				printf("%.2f\t", array[i][j]);
			}
			printf("\n");
		}
	printf("The transpose of the matrix is : \n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%.2f\t", array[j][i]);
		}
		printf("\n");
	}

}

