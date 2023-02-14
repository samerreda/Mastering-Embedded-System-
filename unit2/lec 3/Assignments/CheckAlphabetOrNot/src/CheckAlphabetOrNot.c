/*
 ============================================================================
 Name        : CheckAlphabetOrNot.c
 Author      : Samer
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("Checking the character is an alphabet or not "); /* prints Checking the character is an alphabet or not  */
	char c;
	setbuf(stdout,NULL);

	printf("Enter a character: ");
	scanf("%c", &c);
    //from ASCII table we can use numerical values instead of alphabets below
	//(a->z)=(97->122) , (A->Z)=(65->90)
	if ((c>'a' && c<'z') || (c>'A' && c<'Z'))
	{
		printf("%c is an alphabet", c);
	}
	else
	{
		printf("%c is not an alphabet", c);
	}
	return EXIT_SUCCESS;
}
