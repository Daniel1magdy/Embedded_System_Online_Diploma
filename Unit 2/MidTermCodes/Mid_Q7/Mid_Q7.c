/*
 * Mid_Q7.c
 *
 *  Created on: Feb 3, 2023
 *      Author: DaNil
 */

#include <stdio.h>
int addfunction (int);

void main (void)
{
	int x = 0 , z;;
    z=addfunction(x);
    printf("The result is %d",z);
}


int addfunction (int y)
{
	int z ;
	if (y!=100)
	{
	y++;
	z = addfunction(y);
	z = z+y ;
	return z ;
	}
	else
	 return 0;
}
