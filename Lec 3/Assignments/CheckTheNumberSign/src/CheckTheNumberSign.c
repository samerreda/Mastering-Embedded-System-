/*
 ============================================================================
 Name        : CheckTheNumberSign.c
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
    float number;
    setbuf(stdout,NULL);
	puts("Check if the number positive or negative ");/* prints Check if the number positive or negative  */
	printf ("Enter a number: ");
	scanf("%f",&number);

	if (number>0)
			printf("%5.2f is positive.",number);
	else if(number==0)
			printf("You enter zero.");
		else
			printf("%5.2f is negative.",number);
	return EXIT_SUCCESS;
}