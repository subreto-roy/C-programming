#include<stdio.h>
int main()
{
	int i, j, n, m, arr[10][10];
	scanf("%d %d", &n, &m);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
         scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = n - 1; j >= 0; j--)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}

}