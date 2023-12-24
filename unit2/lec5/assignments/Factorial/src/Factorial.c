/*
 ============================================================================
 Name        : Factorial.c
 Author      : Samer Reda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial (int num);

int main(void)
{
	setbuf(stdout,NULL);
	int num=0,fact;
	while (1)
	{
		printf("Enter an positive number: ");
		scanf("%d",&num);

		if (num >=0)
		{
			fact=factorial(num);
			printf("Factorial of %d = %d\n",num,fact);
		}
		else
			printf("pls try again, ");
	}
}
int factorial (int num)
{
	int fact=1;
	for (int i=1; i<=num;i++)
		fact = fact *i;
	return fact;
}
