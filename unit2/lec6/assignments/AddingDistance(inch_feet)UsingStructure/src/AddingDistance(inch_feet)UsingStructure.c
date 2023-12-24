/*
 ============================================================================
 Name        : AddingDistance(inch_feet)UsingStructure.c
 Author      : Samer Reda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int G_tot_feet;
float G_tot_inch;
struct G_S_information
{
	float inch;
	int feet;
};
int main(void)
{
	struct G_S_information distance_1;
	struct G_S_information distance_2;
	setbuf(stdout,NULL);
	printf("Enter information for 1st distance:\n");
	printf("Enter Feet: ");
	scanf("%d",&distance_1.feet);
	printf("Enter inch: ");
	scanf("%f",&distance_1.inch);

	printf("Enter information for 1st distance:\n");
	printf("Enter Feet: ");
	scanf("%d",&distance_2.feet);
	printf("Enter inch: ");
	scanf("%f",&distance_2.inch);

	G_tot_inch=distance_1.inch+distance_2.inch;
	if(G_tot_inch>=12)
	{
		G_tot_feet = G_tot_feet + (int)(G_tot_inch/12);
	    G_tot_inch = (float)fmod(G_tot_inch,12);
	}

	printf("Sum of Distance=%d'-%.1f''",G_tot_feet,G_tot_inch);
	return 0;
}
