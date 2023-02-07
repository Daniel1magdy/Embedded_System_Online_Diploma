/*
 * HW5_EX6.c
 *
 *  Created on: Feb 7, 2023
 *      Author: DaNil
 */

#include <stdio.h>
//defining a union
union job {
char name[32];
int worker_no;
float salary;
}u;

struct job1 {
char name[32];
float salary;
int worker_no;
}s;

int main(){
printf("size of union = %d", sizeof(u));
printf("\nsize of structure = %d", sizeof(s));
return 0;
}
