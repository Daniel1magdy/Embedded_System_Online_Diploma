/*
 * Q1.c
 *
 *  Created on: Jan 28, 2023
 *      Author: DaNil
 */

#include <stdio.h>
#include <string.h>
void main(void)
{
char text1[10];
char text2[10]= "Ahmed" ;
int x;
printf("please enter your user name:");
fflush(stdin); fflush(stdout);
scanf("%s",&text1);
x= strcmp(text1,text2);
if (x==0)
    printf("You are Welcome");
else
    printf("Access denied");

}
