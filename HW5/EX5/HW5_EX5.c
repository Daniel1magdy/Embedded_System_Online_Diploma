/*
 * HW5_EX5.c
 *
 *  Created on: Feb 7, 2023
 *      Author: DaNil
 */

#include <stdio.h>
#define pi 3.141592654
#define AreaFunction(r)(pi*r*r)

void main (void)
{
	float result , radius ;
	printf("PLease enter the radius: ");
	fflush(stdin); fflush(stdout);
	scanf ("%f",&radius);

	result = AreaFunction(radius);
	printf("The Area equals: %.2f ",result);
}
