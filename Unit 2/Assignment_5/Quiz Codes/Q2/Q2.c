/*
 * Q2.c
 *
 *  Created on: Jan 30, 2023
 *      Author: DaNil
 */

#include <stdio.h>

void main (void)
{
    char array1[100];
    char array2[100];
    char temparray[100];

    printf("please enter the first string:\n");
    fflush(stdin); fflush(stdout);
    gets(array1);

    printf("please enter the second string:\n");
    fflush(stdin); fflush(stdout);
    gets(array2);

    for (int i = 0 ; i<100 ;i++)
    {
        temparray[i]=array1[i];
        array1[i]=array2[i];
        array2[i]=temparray[i];
    }

    printf("after swing\n");
    printf("first string is : %s\n",array1);
    printf("second string is : %s",array2);


}
