/*
 ============================================================================
 Name        : EvenOrOdd.c
 Author      : Samer
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("Check whear the number even or odd "); /* prints Check whear the number even or odd  */
	int num;
	setbuf(stdout,NULL);
	printf("Enter an integer you want to check: ");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("%d is even.", num);
	else
		printf("%d is odd.", num);

	return EXIT_SUCCESS;
}
