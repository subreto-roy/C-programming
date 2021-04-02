#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rowSum(int mat[8][6], int id);
int main()
{
	int mat[8][6], i, j,id;
	for (i = 0; i<8; i++)
	{
		for (j = 0; j<6; j++)
		{
			mat[i][j] = rand() % 10 + 1;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}

	printf("Enter the id_Number:\n");
	scanf("%d", &id);
	int sum;
	sum = rowSum(mat, id);
	printf("%d", sum);
	return 0;
}
int rowSum(int mat[8][6], int id)
{
	int i, j;
	int sum = 0;
	for (i = 0; i<8; i++)
	{
		for (j = 0; j<6; j++)
		{
			if (id %2 ==0);
			{
				sum += mat[id][j];
			}
		}
	}
	return sum;
}