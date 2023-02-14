/*
 ============================================================================
 Name        : SwapWithoutTemp.c
 Author      : Samer
 Version     :
 Copyright   :
 Description : Swap without Temporary Variable in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a , b ;
	setbuf(stdout,NULL);
	printf ("Enter number a: ");
	scanf("%d",&a);
	printf ("Enter number b: ");
	scanf("%d",&b);
	a = a + b ;
	b = a - b ;
	a = a - b ;
	printf ("\nAfter Swap, a = %d \n",a);
	printf ("After Swap, b = %d \n",b);
	return 0 ;
}