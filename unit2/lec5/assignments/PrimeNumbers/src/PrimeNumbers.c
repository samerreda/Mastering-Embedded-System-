/*
 ============================================================================
 Name        : PrimeNumbers.c
 Author      : Samer Reda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int check_prime(int num);

int main(void)
{
	int num1,num2,i,status;
	setbuf(stdout,NULL);

	printf("Enter Tow numbers(intervals):");
	scanf("%d %d",&num1,&num2);

	printf("prime numbers between %d and %d are: ",num1,num2);

	for(i=num1+1;i<num2;++i)
	{
		status=check_prime(i);
		if(status==0)
			printf("%d ",i);
	}

}
int check_prime(int num)
{
	int j,status =0;
	for(j=2;j<=num/2;++j)
	{if(num%j==0)
	{
		status=1;
		break;
	}
	}
	return status;
}





