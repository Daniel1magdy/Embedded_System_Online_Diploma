/*
 * HW5_EX3.c
 *
 *  Created on: Feb 6, 2023
 *      Author: DaNil
 */

#include <stdio.h>

struct Snumbers {
	float real;
	float imaj;
};

void AddFunction(struct Snumbers var1,struct Snumbers var2);

void main(void)
{
	struct Snumbers object[2] ;

	printf("Please enter real & imaginary for the 1st number respectively: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f%f",&object[0].real,&object[0].imaj);

	printf("Please enter real & imaginary for the 2nd number respectively: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f%f",&object[1].real,&object[1].imaj);

	AddFunction(object[0],object[1]);

}

void AddFunction(struct Snumbers var1,struct Snumbers var2)
{
	struct Snumbers result;
	result.real = var1.real+var2.real ;
	result.imaj = var1.imaj+var2.imaj ;

	printf("Sum = %.1f+%.1fi",result.real,result.imaj);
}




