/*
 ============================================================================
 Name        : Facatorial.c
 Author      : Samer
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=1,index;
    long unsigned int f=1;
	setbuf (stdout,NULL);
	puts("Factorial value"); /* prints Factorial value */
    printf("Enter an integer: ");
    scanf("%d",&index);
	if(index<0)
		printf("Factorial of negative numbsr dosen't exist !!");
	else
	{
		for (i=1;i<=index;i++)
			f*=i;
		printf ("Factorial = %lu",f);
	}
	return EXIT_SUCCESS;
}