/*
 * HW3_EX1.c
 *
 *  Created on: Jan 19, 2023
 *      Author: DaNil
 */

#include <stdio.h>



void main(void)
{
	float array1[2][2] ;
	float array2[2][2] ;
	int i , j , x , y ,z ,q ;
	float arraysum [2][2] ;
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("Matrix (1) please enter a[%d][%d] :", (i+1),(j+1));
			fflush(stdin); fflush(stdout);
			scanf ("%f",&array1[i][j]);

		}
	}

	for (x=0;x<2;x++)
		{
			for (y=0;y<2;y++)
			{
				printf("Matrix (2) please enter b[%d][%d] :", (x+1),(y+1));
				fflush(stdin); fflush(stdout);
				scanf ("%f",&array2[x][y]);

			}
		}
	printf("sum of matrix : \n");
	for (z=0;z<2;z++)
	{
		for (q=0;q<2;q++)
		{
			arraysum[z][q]= (array1[z][q]+array2[z][q]);
			printf("%.2f\t", arraysum[z][q]);
		}
		printf("\n");
	}

}
