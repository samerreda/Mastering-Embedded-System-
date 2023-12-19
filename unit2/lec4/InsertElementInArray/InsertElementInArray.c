/*
 ============================================================================
 Name        : InsertElementInArray.c
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
	//Declarations all variables
	int array[10],i,numbers,inserted_num,index;
    setbuf(stdout,NULL); //to solve printing problem with Eclipse IDE

    //take the size of array
	printf("Enter numbers of elements: ");
	scanf("%d",&numbers);

    //take the array elements
	for(i=0;i<numbers;i++)
		scanf("%d",&array[i]);

	//take the value that the user wanna to insert
	printf("Enter the element to be inserted : ");
	scanf("%d",&inserted_num);

	//take the location from the user to put the value in it
	printf("Enter the location: ");
	scanf("%d",&index);

	//make a empty location in the array according to the user
	for(i=numbers;i>=index;i--)
		array[i]=array[i-1];

	//put the value in it location
	array[i]=inserted_num;

	//printing the new array
	for (i=0;i<numbers;i++)
		printf("%d\t",array[i]);

}
