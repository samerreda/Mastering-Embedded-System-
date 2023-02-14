/*
 ============================================================================
 Name        : SummationNaturalNumbers.c
 Author      : Samer
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("summation the natural number"); /* prints summation the natural number */
	int number, i, sum = 0;
	setbuf(stdout,NULL);

	printf("Enter an integer: ");
	scanf("%d", &number);

	for (i = 1; i <= number; i++)
	{
		sum += i;
	}

	printf("Sum = %d", sum);
	return EXIT_SUCCESS;
}
