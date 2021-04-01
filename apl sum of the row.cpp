#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rowSum(int mat[8][6], int rownumber);
int main()
{
	int mat[8][6], i, j, row;
	for (i = 0; i<8; i++)
	{
		for (j = 0; j<6; j++)
		{
			mat[i][j] = rand()%10+1;
			printf("%d", mat[i][j]);
		}
		printf("\n");
	}

	printf("Enter the Row_Number:\n");
	scanf("%d", &row);
	int sum;
	sum = rowSum(mat, row);
	printf("%d", sum);
	return 0;
}
int rowSum(int mat[8][6], int rownumber)
{
	int i, j;
	int sum = 0;
	for (i = 0; i<8; i++)
	{
		for (j = 0; j<6; j++)
		{
			if (i == rownumber)
			{
				sum += mat[rownumber][j];
			}
		}
	}
	return sum;
}