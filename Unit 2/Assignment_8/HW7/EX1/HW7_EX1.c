/*
 * HW7_EX1.c
 *
 *  Created on: Jan 26, 2024
 *      Author: DaNil
 */




#include <stdio.h>

void main (void)
{
	unsigned int m =29 ;
	printf("address of m : 0x%x\n",&m);
	printf("value of m : %d\n",m);

	unsigned int *ab=&m ;


	printf("address of pointer ab : 0x%x\n",&ab);
	printf("value of pointer ab : 0x%x\n",ab);
	printf("content of pointer ab : %d\n",*ab);

	m=34;

	printf("address of pointer ab : 0x%x\n",&ab);
	printf("value of pointer ab : 0x%x\n",ab);
	printf("content of pointer ab : %d\n",*ab);

	*ab=7;
	printf("address of pointer ab : 0x%x\n",&ab);
	printf("value of pointer ab : 0x%x\n",ab);
	printf("content of pointer ab : %d\n",*ab);

	printf("address of m : 0x%x\n",&m);
	printf("value of m : %d\n",m);


}
