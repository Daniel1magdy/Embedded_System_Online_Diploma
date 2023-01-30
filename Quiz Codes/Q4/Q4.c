/*
 * Q4.c
 *
 *  Created on: Jan 30, 2023
 *      Author: DaNil
 */


#include <stdio.h>
#include <string.h>
void main(void)
{
int array[100]={'0x30','0x31','0x32','0x33','0x34','0x35','0x36','0x37','0x38','0x39' };
int text1 ;
printf("please enter your number in ascii like '0x33' : ");
fflush(stdin); fflush(stdout);
gets(text1);
for(int i=0; i<10 ; i++)
{
    if(text1==array[i])
        printf("This number is : %d",i);

}

}
