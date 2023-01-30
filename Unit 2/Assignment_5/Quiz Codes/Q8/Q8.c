/*
 * Q8.c
 *
 *  Created on: Jan 30, 2023
 *      Author: DaNil
 */
#include <stdio.h>
#include <string.h>
void main(void)
{
int x ,num , y;
int array [20];

printf("enter the number of elements in array :");
fflush(stdin); fflush(stdout);

scanf("%d",&num);

printf("enter the array :");
fflush(stdin); fflush(stdout);

for (int i = 0 ; i< num; i++)
{
    scanf("%d,",&array[i]);
}


int k =-1 ;
printf("enter the number you want to search :");
fflush(stdin); fflush(stdout);

scanf("%d",&y);

for (int i = 0 ; i< num; i++)
{
    if (y==array[i])
	k=i;
}
printf("the index is %d",k);

}
