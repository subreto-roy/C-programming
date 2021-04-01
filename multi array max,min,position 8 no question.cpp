#include<stdio.h>
int main()
{
	int i, j,m, n, arr1[10][10], max, min, pos1 = 0, pos2 = 0;
	scanf("%d%d",&n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr1[i][j]);
		}

	}
	

	max = arr1[0][0];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)

		{
			if (max<arr1[i][j])
			{
				max = arr1[i][j];
				pos1 = i;
				pos2 = j;
			}

		}
	}
	printf("Max: %d\nIndex:  [%d][%d]", max, pos1, pos2);
}

