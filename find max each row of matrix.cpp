#include<stdio.h>
#include<limits.h>
int main()
{
	int i, j, mat[10][10], maxRow[10], r, c,max;
	scanf("%d%d", &r, &c);

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}

	//max = mat[0][0];
	max = INT_MIN;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (max < mat[i][j])
			{
				max = mat[i][j];
			}
		}
		maxRow[i] = max;
		//max = mat[i + 1][0];
		//max = 0;
		max = INT_MIN;
	}


	for (i = 0; i < r; i++)
	{
		printf("%d ", maxRow[i]);
	}
}