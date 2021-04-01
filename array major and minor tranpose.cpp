#include<stdio.h>
int main()
{
	int i, j,k, mat[50][50], r, c,temp;
	scanf("%d %d", &r, &c);
	if (r == c)
	{


		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
				scanf("%d", &mat[i][j]);
			}
		}

	
		for (i = 0; i < r; i++)
		{
			temp = mat[i][i];
			mat[i][i] = mat[i][r - i - 1];
			mat[i][r - i - 1] = temp;
		}


		
		printf("After Exchanging diagonal: \n");
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
				printf("%d ", mat[i][j]);
			}
			printf("\n");
		}
	}

else
{
	printf("not possible");
}


}