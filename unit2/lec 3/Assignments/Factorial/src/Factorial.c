/*
 ============================================================================
 Name        : Factorial.c
 Author      : Samer
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("Finding the factorial "); /* prints Finding the factorial  */
	int index, factorial = 1, i;
	setbuf(stdout,NULL);

	printf("Enter an integer: ");
	scanf("%d", &index);

	if (index < 0)
	{
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
	else
	{
		for (i = 1; i <= index; i++)
		{
			factorial *= i;
		}
		printf("Factorial = %d", factorial);
	}
	return EXIT_SUCCESS;
}
