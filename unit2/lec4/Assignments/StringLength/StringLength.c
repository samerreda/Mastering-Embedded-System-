/*
 ============================================================================
 Name        : StringLength.c
 Author      : Samer Reda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//Definition all Variables
	char string [100];
	int i=0;
	//setbuf(stdout,NULL); //to solve printing problem

	/*get a string from user by using gets function,
	   to take space if we want*/
	printf("Enter a String : ");
	gets(string);

	//count the no of string by using while loop until reach null char
	while (string[i] != '\0')
		i++;
	printf("The Length of string : %d",i);

}
