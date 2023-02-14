/*
 ============================================================================
 Name        : odd_sum.c
 Author      : Samer
 Version     :
 Copyright   : Your copyright notice
 Description :  Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
void main(void)
{
    int i = 1, sum = 0 ;
    setbuf(stdout,NULL);
    while(i<100)
    {
     sum += i;
     i += 2;
    }
    printf("the sum of the odd numbers from 1 to 99: %d \n",sum);
}
