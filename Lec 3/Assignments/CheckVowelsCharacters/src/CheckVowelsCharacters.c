/*
 ============================================================================
 Name        : CheckVowelsCharacters.c
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
	char c ;
	setbuf(stdout,NULL);

	puts("Check Vowels alphapets"); /* prints Check Vowels alphapets */

	printf("Enter an alphabet: ");
	scanf("%c",&c);

	if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
		printf("%c is a vowel.",c);
	else
		printf("%c is a consonant.",c);

	return EXIT_SUCCESS;
}
