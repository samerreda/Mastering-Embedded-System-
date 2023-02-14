/*
 ============================================================================
 Name        : CheckPositiveOrNegative.c
 Author      : Samer
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("Checking the number is positive or negative "); /* prints checking the number is positive or negative  */
	float number;
	setbuf(stdout,NULL);

	printf("Enter a numbers: ");
	scanf("%f", &number);

	if (number > 0)
		printf("%.2f is positive", number);
	else if (number < 0)
		printf("%.2f is negative", number);
	else
		printf("You entered zero");
	return EXIT_SUCCESS;
}
