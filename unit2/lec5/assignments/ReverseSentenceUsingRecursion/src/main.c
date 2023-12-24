/*
 ============================================================================
 Name        : ReverseSentenceUsingRecursion.c
 Author      : Samer Reda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(int length);
char sentence[100],rsentence[100];

int main(void)
{
	int length ;
	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	fgets(sentence,100,stdin);
	length =strlen(sentence);
	reverse(length);
	return 0;
}
void reverse(int length)
{
   static int i =0;
   rsentence[i]=sentence[length-1];
   length--;
   i++;
   if(length)
      reverse(length);
   else
    printf("%s",rsentence);
}

