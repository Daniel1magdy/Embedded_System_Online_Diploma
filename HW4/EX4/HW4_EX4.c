/*
 * HW4_EX4.c
 *
 *  Created on: Jan 25, 2023
 *      Author: DaNil
 */

#include <stdio.h>

int power_func(int x ,int y);

void main (void)
{
	int base , pow;
	printf("please enter the base number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&base);
	printf("please enter the power number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&pow);

	printf("%d power %d is : %d ", base,pow, power_func (base , pow));

}

int power_func (int x ,int y)
{
	if (y!=0)
	{
		return x * power_func(x , y-1);
	}
	else
		return 1;

}


