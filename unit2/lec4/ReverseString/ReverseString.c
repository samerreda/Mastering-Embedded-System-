/*
 ============================================================================
 Name        : ReverseString.c
 Author      : Samer Reda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	//Definition all variables
	char string[100], temp;
	int i, length;
	setbuf(stdout,NULL);//to solve printing problem in Eclipse

	//take a string from user
	printf("Enter a String : ");
	gets(string);
	//initialization the variable "length" with the length of string
	length=strlen(string)-1;
	//to swap the character positions
	for (i=0; i<length; i++)
	{
		temp = string[i];
		string[i]=string [length];
		string [length]=temp;
		length--;
	}
	printf("Reverse String is : %s",string);
}
