#include<stdio.h>
int main()
{
	int i, j, A[10][10], r, c;
	scanf("%d%d", &r, &c);

	for (i = 0; i<r; i++)
	{
		for (j = 0; j<c; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	printf("Row wise: ");
	for (i = 0; i<r; i++)
	{
		for (j = 0; j<c; j++)
		{
			printf("%d ", A[i][j]);
		}
	}
	printf("\nCol wise: ");
	for (i = 0; i<c; i++)
	{
		for (j = 0; j<r; j++)
		{
			printf("%d ", A[j][i]);
		}
	}



	return 0;
}