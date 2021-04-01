#include<stdio.h>
int main()
{
	int i, j, n, A[10][10], transpose[10][10], flag = 0;
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			transpose[j][i] = A[i][j];
		}
	}

	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			if (transpose[i][j] != A[i][j])
			{
				flag = 1;
			}
		}
	}

	if (flag == 0)
	{
		printf("Yes");
	}
	else
	{
		printf("no");
	}
}