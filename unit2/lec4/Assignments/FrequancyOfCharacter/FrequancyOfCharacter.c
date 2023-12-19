/*
 ============================================================================
 Name        : FrequancyOfCharacter.c
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
	//Definition all variables
	char string [100], char_frequent;
	int frequency = 0, i=0;
	setbuf(stdout,NULL); //to solve printing problem

	/*get string from user by using gets function,
	  to take space if we want*/
	printf("Enter a String: ");
	gets(string);

	//take a single char
	printf("Enter a Character to find Frequency: ");
	scanf("%c",&char_frequent);

	/*search about the char & count it's frequency in the string,
	 which terminated by null character & count it */
	for(i=0; string[i] != '\0' ;i++)
		if(string[i]==char_frequent)
			frequency++;
	printf("Frequency of %c = %d",char_frequent,frequency);

}
