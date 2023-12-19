/*
 ============================================================================
 Name        : CalculateAverageUsingArray.c
 Author      : Samer Reda 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,i;
	float sum=0, average, array[100];
	setbuf(stdout,NULL);

	printf("Enter the numbers of data: ");
	scanf("%d",&number);

	while (number<=0 || number >100)
	{
		printf("the number you entered is not valid !!\n pls enter the number again(1 to 100): ");
		scanf("%d",&number);
	}

	for(i=0; i<number; i++)
	{
		printf("%d. Enter number : ",i+1);
		scanf("%f",&array[i]);
		sum+=array[i];
	}
	average=sum/number;
	printf("Average = %.2f ",average);
	return EXIT_SUCCESS;
}
