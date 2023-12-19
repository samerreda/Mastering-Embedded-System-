/*
 ============================================================================
 Name        : SearchInArray.c
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
	int array [100],number,i,searched_num;
	setbuf(stdout,NULL); //to solve the printing problem

	//to take the number of elements
	printf("Enter no of Elements: ");
	scanf("%d",&number);

	// to take all values from the user
	for (i=0;i<number;i++)
		scanf("%d",&array[i]); //i=number

	printf("Enter Element to be searched: ");
	scanf("%d",&searched_num);

	//search about a specific value
	for(i=0;i<number;i++)
		if(searched_num==array[i])
		{
			printf("Number Found at The Location : %d\n",i+1);
			break;
		//break out of the loop if we find the searched value
		}
	/*if searched value not found,
	  the for loop will end (i=number)*/
	if (i==number)
		printf("Number is not found !!\n");

}
