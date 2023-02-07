/*
 * HW5_EX4.c
 *
 *  Created on: Feb 7, 2023
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
	struct Sstudent object[10];

	printf("Please enter the information of students \n");
	for(int i = 0 ; i<10; i++)
	{
		printf("For roll number %d\n",i+1);

		printf("Please enter the name: ");
		fflush(stdin); fflush(stdout);
		scanf("%s",&object[i].name);

		printf("Please enter the marks: ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&object[i].marks);

	}

	printf("Displaying the information of students \n");

	for(int i = 0 ; i<10; i++)
		{
			printf("Information for roll number %d\n",i+1);

			printf("The name: %s\n",object[i].name);
			printf("The marks: %.2f\n",object[i].marks);

		}

}

