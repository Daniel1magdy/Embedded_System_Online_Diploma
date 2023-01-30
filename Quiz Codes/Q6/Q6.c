/*
 * Q6.c
 *
 *  Created on: Jan 30, 2023
 *      Author: DaNil
 */

#include <stdio.h>

void main (void)
{
    int num , x ,y;
   printf("please enter the number \n");
   fflush(stdin); fflush(stdout);

   scanf("%d",&num) ;
   x=y=num;
   for(int i=0 ; num!=0 ; i++)
    {
        x=num%2 ;
        if (i==3)
        printf("the 4th least significant bit for %d is %d ",y,x);
        num=num/2 ;
    }

}

