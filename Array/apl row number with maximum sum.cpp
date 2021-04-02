#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int ar[10] = { 0 };
int rowSum(int mat[3][3]);
int main()
{
	int matrix[3][3], i, j;
	srand(time(NULL));

	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			matrix[i][j] = rand() % 5;
		}
	}

	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	rowSum(matrix);

	return 0;
}

int rowSum(int mat[3][3])
{
	int i, j, sum = 0, k = 0, max, pos = 0;

	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			sum = sum + mat[i][j];
		}
		ar[k++] = sum;
		sum = 0;
	}
	max = ar[0];

	for (i = 0; i<3; i++)
	{
		if (max<ar[i])
		{
			max = ar[i];
			pos = i;
		}
	}

	printf("\nThe maximum sum is %d\nposition is %d ", max, pos);

}
