#include<stdio.h>
int main()
{
	int i, j,k, r1, c1, r2, c2, arr1[50][50], arr2[50][50],multi[50][50],sum=0;
	scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

	if (c1 == r2)
	{
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				scanf("%d", &arr1[i][j]);
			}

		}
		for (i = 0; i < r2; i++)
		{
			for (j = 0; j < c2; j++)
			{
				scanf("%d", &arr2[i][j]);
			}
		}

		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c2; j++)
			{
				for (k = 0; k < r2; k++)
				{
					sum =sum+  arr1[i][k] * arr2[k][j];
				}
				multi[i][j] = sum;
				printf("%d ", multi[i][j]);
				sum = 0;
			}
			printf("\n");
		}

	}
	else
	{
		printf("Matrix Multiplication not possible\n");
	}
		
	
	return 0;


}