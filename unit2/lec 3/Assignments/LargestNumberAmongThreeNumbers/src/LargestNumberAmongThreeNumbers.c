/*
 ============================================================================
 Name        : LargestNumberAmongThreeNumbers.c
 Author      : Samer
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("Finding the largest number among three numbers "); /* prints Finding the largest number amongthree numbers  */
	float a,b,c,largest;
	setbuf(stdout,NULL);
	printf("Enter three numbers: ");
	    scanf("%f %f %f",&a,&b,&c);

	    if (a>b && a>c)
	    {
	        largest = a;
	    }
	    else if (b>a && b>c)
	    {
	        largest = b;
	    }
	    else if (c>a && c>b)
	    {
	        largest = c;
	    }

	    printf("Largest number = %.2f", largest);
	return EXIT_SUCCESS;
}
