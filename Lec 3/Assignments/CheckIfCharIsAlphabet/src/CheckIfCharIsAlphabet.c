/*
 ============================================================================
 Name        : CheckIfCharIsAlphabet.c
 Author      : Samer
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("Check if the character is alphabet or not "); /* prints Check if the character is alphabet or not  */
	char c;
	setbuf(stdout,NULL);
	printf("Enter a character: ");
	scanf("%c",&c);

	/*the following numerical values which used in if statement are
  equivalent to the alphabets values, and brought from ASCII Table,
  and we can the characters value like 'a','z','A','Z' */

	if ((c>=65&&c<=90)||(c>=97&&c<=122))
		printf("%c is a character",c);
	else
		printf ("%c is not a character",c);
	return EXIT_SUCCESS;
}
