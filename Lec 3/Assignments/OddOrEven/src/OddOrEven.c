/*
 ============================================================================
 Name        : OddOrEven.c
 Author      : Samer
 Version     :
 Copyright   : Your copyright notice
 Description : Odd or Even in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number ;
	setbuf(stdout,NULL);
	printf("Enter the number to check: ");
	scanf("%d",&number);
	if (number%2 == 0 )
		printf ("the number %d is even number",number);
	else
		printf ("the number %d is odd number",number);
	return EXIT_SUCCESS;
}
