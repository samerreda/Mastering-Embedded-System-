/*
 ============================================================================
 Name        : CheckVowelOrConsonant.c
 Author      : Samer
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("Check wheather the character is Vowel or Consonant"); /* prints Check wheather the character is Vowel or Consonant */
	char c;
	setbuf(stdout,NULL);

	printf("Enter an alphabet: ");
	scanf("%c", &c);


	switch (c)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("%c is a vowel", c);
		break;
	default:
		printf("%c is a consonant", c);
		break;
	}
	return EXIT_SUCCESS;
}
