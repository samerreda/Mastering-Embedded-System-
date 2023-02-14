/*
 ============================================================================
 Name        : SimpleCalculator.c
 Author      : Samer
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("Simple Calculator"); /* prints Simple Calculator */
	char operator;
	float num1, num2;
	setbuf (stdout,NULL);
	printf("Enter operator either + or - or * or / : ");
	scanf("%c", &operator);
	printf("Enter Two operands : ");
	scanf("%f%f", &num1, &num2);

	switch (operator)
	{
	case '*':
		printf("%.1f %c %.1f = %.1f", num1, operator, num2, num1 * num2);
		break;
	case '+':
		printf("%.1f %c %.1f = %.1f", num1, operator, num2, num1 + num2);
		break;
	case '-':
		printf("%.1f %c %.1f = %.1f", num1, operator, num2, num1 - num2);
		break;
	case '/':
		printf("%.1f %c %.1f = %.1f", num1, operator, num2, num1 / num2);
		break;
	default:
		printf("you enter wrong operator");
		break;
	}

	return EXIT_SUCCESS;
}
