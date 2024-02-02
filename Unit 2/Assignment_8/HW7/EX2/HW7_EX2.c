/*
 * HW7_EX2.c
 *
 *  Created on: Jan 26, 2024
 *      Author: DaNil
 */


#include <stdio.h>

void main (void)
{
	char alpharray[26];
	char *ptr=alpharray;

	for (int i =0;i<26;i++)
	{
		*ptr=(65+i);
		ptr++;
	}

	ptr=alpharray;
	for (int j =0;j<26;j++)
	{
		printf("%c ",*ptr);
		ptr++;
		}


}
