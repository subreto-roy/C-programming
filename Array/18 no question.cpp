#include<stdio.h>
int main()
{
	int i, j, n, arr[10][10], sum = 0;
	scanf("%d", &n);
	if (n % 2 != 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				scanf("%d", &arr[i][j]);
			}
		}



		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				sum = sum + arr[i][j];
			}
			printf("\n");
		}
		printf("%d", sum);
	}


	else
		printf("not possible");


}
//assignment kora ace.