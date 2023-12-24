/*
 ============================================================================
 Name        : AddingTwoComplexNumber_Structure.c
 Author      : Samer Reda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct G_S_ComplexNumber
{
	float real_part,imaginary_part;
};

struct G_S_ComplexNumber read_complex(int i);
struct G_S_ComplexNumber Adding(struct G_S_ComplexNumber a,struct G_S_ComplexNumber b);
void PrintComplex(struct G_S_ComplexNumber result);

int main(void)
{ int i=1;
struct G_S_ComplexNumber num_1;
struct G_S_ComplexNumber num_2;
struct G_S_ComplexNumber result;
setbuf(stdout,NULL);
do
{
	num_1=read_complex(i);
	num_2=read_complex(i+1);
	result=Adding(num_1,num_2);
	PrintComplex(result);

	printf("if U want to out press (0), to calculate again press (1): ");
	scanf("%d",&i);
}
while(i != 0);
return 0;
}

struct G_S_ComplexNumber read_complex (int i)
{
	struct G_S_ComplexNumber num;
	printf("for number (%d) \nEnter real & imaginary respectively:",i);
	scanf("%f %f",&num.real_part,&num.imaginary_part);
	return num;
};

struct G_S_ComplexNumber Adding(struct G_S_ComplexNumber a,struct G_S_ComplexNumber b)
{
	struct G_S_ComplexNumber Result;
	Result.real_part = a.real_part + b.real_part;
	Result.imaginary_part = a.imaginary_part + b.imaginary_part;
	return Result;

};

void PrintComplex(struct G_S_ComplexNumber Result)
{
	printf("Sum = %.2f + %.2f i\n",Result.real_part,Result.imaginary_part);
}
