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
	puts("Simple Calculator by using Switch statement"); /* prints Simple Calculator by using Switch statement */
	char operator;
	float num1,num2,operation;
	setbuf(stdout,NULL);
	printf("Enter operator either + or - or * or divide :- ");
	scanf("%c",&operator);
	printf("Enter two operands: ");
	scanf("%f %f",&num1,&num2);
	switch(operator)
	{
	case '+':
	{
		operation=num1+num2;
		printf("%.1f + %.1f = %.1f",num1,num2,operation);
	}
	break;
	case '-':
	{
		operation=num1-num2;
		printf("%.1f - %.1f = %.1f",num1,num2,operation);
	}
	break;
	case '*':
	{
		operation=num1*num2;
		printf("%.1f * %.1f = %.1f",num1,num2,operation);
	}
	break;
	{
		operation=num1/num2;
		printf("%.1f / %.1f = %.1f",num1,num2,operation);
	}
	break;
	default:
		printf("Enter the correct from !!");
		break;
	}

	return EXIT_SUCCESS;
}