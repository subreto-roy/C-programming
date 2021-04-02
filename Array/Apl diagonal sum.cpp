#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, arr[10][10], sum = 0, m, n;
	scanf("%d %d", &m, &n);
	if (m == n)
	{


		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				arr[i][j] = rand() %9+1;

			}
		}

		printf("\nGenerated Matrix: \n");
			for (i = 0; i < m; i++)
			{
				for (j = 0; j < n; j++)
				{
					printf("%d ", arr[i][j]);

				}
				printf("\n");
			}

		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					sum = sum + arr[i][j];
				}
			}
		   printf("\n");
		}
		
		printf("%d\n", sum);
	}
	else
		printf("not possible");

}
