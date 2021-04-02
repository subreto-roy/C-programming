#include<stdio.h>
int main()
{
	int i, j,n, arr[10][10];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				printf("1");
			}
			else
				printf("0");
		}
		printf("\n");
	}
}
