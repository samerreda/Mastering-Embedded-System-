/*
 ============================================================================
 Name        : average_degree.c
 Author      : Samer
 Version     :
 Copyright   :
 Description : Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int nStudents=0;
	float degree, sum=0 ;
    setbuf(stdout,NULL);
	printf("Enter a negative number if end \n");

	while(1)
	{

		printf("degree of student (%d): \n",nStudents+1);
		scanf("%f",&degree);
		if (degree<0) break;
		sum+=degree;
		nStudents++;
	}
	printf("the average degree is: %f\n",(sum/nStudents));
	return 0 ;
}
