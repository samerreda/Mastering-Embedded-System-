/*
 ============================================================================
 Name        : FindLargestNumber.c
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
	float a,b,c;
	setbuf(stdout,NULL);
	puts("Find The Largest Number Among Three Numbers"); /* prints Find The Largest Number Among Three Numbers */

	printf ("Enter three numbers: ");
	scanf("%f %f %f",&a,&b,&c);

	if (a>b)
		if (a>c)
			printf("Largest number = %f",a);
		else
			printf("Largest Number = %f",c);
	else
		if(b>c)
			printf("Largest number = %f",b);
		else
			printf("Largest number = %f",c);
	return EXIT_SUCCESS;
}