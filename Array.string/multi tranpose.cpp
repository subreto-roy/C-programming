#include<stdio.h>
int main()
{
	int i, j, A[10][10], r, c, tranpose[10][10];
	scanf("%d%d", &r, &c);

	for (i = 0; i<r; i++)
	{
		for (j = 0; j<c; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	for (i = 0; i<r; i++)
	{
		for (j = 0; j<c; j++)
		{
			tranpose[j][i] = A[i][j];
		}
		
	}

	for (i = 0; i < c; i++)
	{
		for (j = 0; j < r; j++)
		{
			printf("%d ", tranpose[i][j]);
		}
		printf("\n");
	}
	
	
  return 0;
}