#include<stdio.h>
int main()
{
	int i, j, sum1=0, sum2=0, sum3=0, n, sum, A[100][100];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == 0 || i == n - 1)
			{
				sum1 = sum1 + A[i][j];
			}
			if (i == j && i != 0 && i != n - 1)
			{
				sum2 = sum2 + A[i][j];
			}
			if ((i + j == n - 1) && (i != 0) && (i != n - 1) && (i != j))
			{
				sum3 = sum3 + A[i][j];
			}

		}
	}
	sum = sum1 + sum2 + sum3;
	printf("%d", sum);
	return 0;

}
