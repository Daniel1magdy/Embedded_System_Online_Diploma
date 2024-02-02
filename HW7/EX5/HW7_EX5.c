/*
 * HW7_EX5.c
 *
 *  Created on: Feb 2, 2024
 *      Author: DaNil
 */

#include <stdio.h>


struct Sdata
{
	int ID;
	char name[10];
};

void main (void)
{
	struct Sdata object[2]={{5,"john"},{6,"ahmed"}};
	struct Sdata *array[2]={&object[0],&object[1]};

	struct Sdata (*(*pointer)[2])=&array ;

	printf("%d",(*(*pointer))->ID);
}
