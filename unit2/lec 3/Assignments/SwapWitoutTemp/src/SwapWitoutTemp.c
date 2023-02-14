/*
 ============================================================================
 Name        : SwapWitoutTemp.c
 Author      : Samer
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("swaping without temp variable "); /* prints swaping without temp variable  */
	int a, b;
	setbuf(stdout,NULL);

	printf("Enter value of a & b to swap: ");
	scanf("%d %d",&a,&b);
	// swapping
	a = a*b;
	b = a/b;
	a = a/b;
	/*another method by using +- operator
	 	a = a + b;
	 	b = a - b;
	 	a = a - b;
	 */
	printf("After swapping, value of a = %d\n", a);
	printf("After swapping, value of b = %d\n", b);

	return EXIT_SUCCESS;
}
