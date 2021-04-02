#include<stdio.h>
int main()
{
	int i, j, m, n, arr1[100][100], arr2[100][100], arr3[100][100] = { 0 };
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i > j)
			{
				arr3[i][j] = arr1[i][j];
			}

			if (i < j)
			{
				arr3[i][j] = arr2[i][j];
			}
		}
		
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}
}