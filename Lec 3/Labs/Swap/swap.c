/*
============================================================================
 Name        : swap.c
 Author      : Samer
 Version     :
 Copyright   :
 Description : Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	    float a , b , temp ;
		printf ("enter value a: ");
		fflush(stdout); fflush(stdin);
		scanf("%f",&a);
		printf ("enter value b: ");
		fflush(stdout); fflush(stdin);
		scanf("%f",&b);
		temp=a;
		a=b;
		b=temp;
		printf("After sawp, value of a = %f\n",a);
		printf("After sawp, value of b = %f\n",b);
		return 0 ;
}
