/*
 * HW5_EX1.c
 *
 *  Created on: Feb 6, 2023
 *      Author: DaNil
 */

#include <stdio.h>

struct Sstudent {
	char name[20];
	int roll;
	float marks;
};


void main(void)
{
	struct Sstudent object;

	printf("Please enter the information of students \n");

	printf("Please enter the name: ");
	fflush(stdin); fflush(stdout);
	scanf("%s",&object.name);

	printf("Please enter the roll number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&object.roll);

	printf("Please enter the marks: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&object.marks);


	printf("Displaying the information: \n");
	printf("Name: %s \n",object.name);
	printf("Roll Number: %d \n",object.roll);
	printf("Marks: %.3f \n",object.marks);





}




