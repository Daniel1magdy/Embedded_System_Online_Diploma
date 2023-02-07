/*
 * HW5_EX2.c
 *
 *  Created on: Feb 6, 2023
 *      Author: DaNil
 */
#include <stdio.h>

struct Slength {
	int feet;
	float inch;
};

void main(void)
{
	struct Slength object[2];

	printf("Please enter the information of 1st distance \n");

	printf("Please enter the length in feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&object[0].feet);

	printf("Please enter the length in inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&object[0].inch);


	printf("Please enter the information of 2nd distance \n");

	printf("Please enter the length in feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&object[1].feet);

	printf("Please enter the length in inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&object[1].inch);


	int result1 ;
	float result2 ;
	result1 = object[0].feet + object[1].feet ;
	result2 = object[0].inch + object[1].inch ;
	for(int i =0 ; result2 >= 12;i++){
	if (result2>12){
		result1++;
		result2 = result2 - 12;
	}
	}

	printf("Sum of distances = %d'-%.2f\" ",result1,result2);


}

