/*
 ============================================================================
 Name        : FindingCircleArea_Macros.c
 Author      : Samer Reda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define area(r) (PI*r*r)
int main(void)
{
	int radius;
	float Area;
	setbuf(stdout,NULL);

	printf("Enter the radius: ");
	scanf("%d",&radius);

	Area = area(radius);
	printf("Area: %.2f",Area);

	return 0;
}
