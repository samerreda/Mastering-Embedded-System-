/*
 ============================================================================
 Name        : CalculatePowerOfNumberByUsing.c
 Author      : Samer Reda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>

int power (int base ,int expo);
int base,expo,result=1;

int  main ()
{
	setbuf(stdout,NULL);
    printf("Enter the Base number: ");
    scanf("%d",&base);
    printf("Enter Power(positive number): ");
    scanf("%d",&expo);
    printf("%d^%d = %d\n",base,expo,power(base,expo));
    return 0;

}
int power (int base , int expo)
{
    result *= base ;
    expo--;
    if (expo!=0)
        power(base,expo);

    return result;
}
