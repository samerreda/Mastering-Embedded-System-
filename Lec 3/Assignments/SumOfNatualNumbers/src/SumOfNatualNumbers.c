/*
 ============================================================================
 Name        : SumOfNatualNumbers.c
 Author      : Samer
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	puts("Sum Of Natual Numbers 1,2,3,..."); /* prints Sum Of Natual Numbers 1,2,3,....... */
    int num,i=0,sum=0;
    setbuf(stdout,NULL);

    printf ("Enter an integer: ");
    scanf("%d",&num);
    for(i=1;num>=i;num--)  //loop with decrement
    	sum+=num;         //sum = sum + num
    printf("Sum = %d",sum);

	return EXIT_SUCCESS;
}
