/*
 ============================================================================
 Name        : StoreStudentInformationByUsingStructure.c
 Author      : Samer Reda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct G_S_student_information
{
	float marks;
	int roll_number;
	char name[100];
};
int main(void) {

	struct G_S_student_information student1;

	setbuf(stdout,NULL);

	printf("Ente4r Information of students:\n\n");

	printf("Enter name: ");
	fgets(student1.name,100,stdin);

	printf("Enter roll number: ");
	scanf("%d",&student1.roll_number);

	printf("Enter marks: ");
	scanf("%f",&student1.marks);

	printf("Displaying information\n");

	printf("Ente4r Information of students:\n\n");

		printf("Name: %s",student1.name);
		printf("Roll number: %d\n",student1.roll_number);
		printf("Marks: %.2f\n",student1.marks);

	return 0;
}
