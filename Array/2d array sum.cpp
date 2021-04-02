#include<stdio.h>
int main()
{
	int i, j, arr1[10][10],arr2[10][10], m, n, sum[10][10];
	scanf("%d,%d", &m, &n);

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
				sum[i][j]= arr1[i][j] + arr2[i][j];
			}
		
		}
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("%d", sum[i][j]);
			}
			printf("\n");
		}

	return 0;
}