#include<stdio.h>
int main()
{
	int i, j, A[100][100], n;
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			scanf("%d", &A[i][j]);

		}
	}
	printf("Major Diagonal: ");
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			if (i == j)
			{
				printf("%d ", A[i][j]);
			}
		}
	}
	printf("Minor Diagonal: ");
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			if (i + j == n - 1)
			{
				printf("%d ", A[i][j]);
			}
		}
	}

	return 0;
}