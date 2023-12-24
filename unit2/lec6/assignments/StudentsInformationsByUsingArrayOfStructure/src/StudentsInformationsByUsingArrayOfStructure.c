/*
 ============================================================================
 Name        : StudentsInformationsByUsingArrayOfStructure.c
 Author      : Samer Reda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct G_S_information {
	char name[100];
	int mark,roll; }arr_students[10];

int main(void) {
	int i;
	setbuf(stdout,NULL);
	printf("Enter information of students");
	for(i=0;i<10;i++)
	{
		arr_students[i].roll=i+1;
		printf("\nFor roll number %d\n",arr_students[i].roll);

		printf("Enter name ");
		scanf("%s",arr_students[i].name);
		printf("Enter mark ");
		scanf("%d",&arr_students[i].mark);
		fflush(stdin); fflush(stdout);
		printf("\n");
	}

	printf("Displaying information of students");
	for(i=0;i<=10;i++)
	{
		printf("\nInformation for roll number %d",arr_students[i].roll);
		printf("\nEnter name %s",arr_students[i].name);
		printf("\nEnter mark %d",arr_students[i].mark);
	}
	return 0;
}
