/*
 * HW2_EX2.c
 *
 *  Created on: Jan 15, 2023
 *      Author: DaNil
 */



#include<stdio.h>

void main (void)
{
	char x ;
	printf("Please enter an alphabet : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);

	if((x == 'a')||(x == 'e')||(x == 'o')||(x == 'u')||(x == 'i'))
	{
		printf("%c is Vowel",x);
	}
	else if ((x == 'A')||(x == 'E')||(x == 'O')||(x == 'U')||(x == 'I'))
	{
		printf("%c is Vowel",x);
	}
	else
		printf("%c is Consonant",x);

}
