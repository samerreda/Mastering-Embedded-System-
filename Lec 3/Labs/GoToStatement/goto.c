/*
 ============================================================================
 Name        : goto_statement.c
 Author      : Samer
 Version     :
 Copyright   :
 Description : GOTO Statement in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	//Calculate Rectangle Area
	float l , w ;
	setbuf(stdout,NULL);
	calculate_again :
	printf ("pls enter the length: ");
	fflush (stdout); fflush(stdin);
	scanf ("%f",&l);
	printf ("pls enter the width: ");
	fflush (stdout); fflush(stdin);
	scanf ("%f",&w);
	printf("the area equal = %f , to calculate press a: ",l*w);
	if( getche()== 'a')
		goto calculate_again ;
	return 0;
}
