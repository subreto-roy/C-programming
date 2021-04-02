#include<stdio.h>
int main()
{
	int i, j, A[10][10], r, c, tranpose[10][10], flag = 0;
	scanf("%d%d", &r, &c);

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	for (i = 0; i < c; i++)
	{
		for (j = 0; j < r; j++)
		{
			tranpose[j][i] = A[i][j];
		}
	}

	flag = 0;
	for (i = 0; i < c; i++)
	{
		for (j = 0; j < r; j++)
		{
			if (tranpose[i][j] != A[i][j])
			{
				flag = 1;
			}
			

		}


	}
	if (flag == 0)
		printf("symmetric");
	else
		printf("not symmetric");
}
	