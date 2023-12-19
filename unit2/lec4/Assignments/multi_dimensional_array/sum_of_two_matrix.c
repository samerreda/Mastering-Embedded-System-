#include <stdio.h>

int main ()
{
	//Variables Declaration
	float matrix_1 [2][2];
	float matrix_2 [2][2];
	float sum_matrix [2][2];
	int i ,j ;
	setbuf(stdout,NULL); //To fix the output print

	printf("Enter the elements of 1st matrix \n");
	//nested for loop to get all 1st matrix elements
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("a%d%d: ",i+1,j+1);
			scanf("%f",&matrix_1[i][j]);
		}
	}

	printf("Enter the elements of 2nd matrix \n");
	//nested for loop to get all 2nd matrix elements
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("b%d%d: ",i+1,j+1);
			scanf("%f",&matrix_2[i][j]);
		}
	}

	printf("Sum Of Matrix \n");
	//nested for loop to calculate the sum matrix elements & print it
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum_matrix[i][j]=matrix_1[i][j]+matrix_2[i][j];
			printf("%.1f\t",sum_matrix[i][j]);

		}
		printf("\n");
	}
	return 0 ;
}
