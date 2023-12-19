/*
 ============================================================================
 Name        : GetTranspose.c
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
	//Declaration all Variables
	int row,colum,i,j,matrix[10][10],transpose[10][10];
	setbuf(stdout,NULL); //to fix the printing problem

//ask the user to enter number the columns and rows
	printf("Enter rows & colums number of matrix: \n");
	scanf("%d %d",&row,&colum);
//nested for loop to get the number of columns &rows correctly
	while (row<=0 || row >10 || colum<=0 || colum >10)
	{
		printf("the rows or colums number you entered is not valid !!\n pls enter the numbers again(1 to 10): ");
		scanf("%d %d",&row,&colum);
	}
//nested for loop to get the matrix elements
	for(i=0;i<row;i++)
	{for(j=0;j<colum;j++)
	{
		printf("Enter element a%d%d : ",i+1,j+1);
		scanf("%d",&matrix[i][j]);
	}
	printf("\n");
	}
//printing the matrix by using nested for loop
	printf("Entered Matrix: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<colum;j++)
			printf("%d\t",matrix[i][j]);
		printf("\n");
	}
//make a transpose matrix by using nested for loop, like that (a12=b21)
	printf("\nTranspose of Matrix: \n");
	for(i=0;i<row;i++)
		for(j=0;j<colum;j++)
		{
			transpose[j][i]=matrix[i][j];
		}

	for(i=0;i<colum;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}

}
