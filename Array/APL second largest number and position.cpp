#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n,i, j, arr[50][50], max, pos1 = 0, pos2 = 0, secondmax;
	scanf("%d", &n);
	srand(time(NULL));
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			arr[i][j] = rand()%8+1;
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}
	max = arr[0][0];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				pos1 = i;
				pos2 = j;
			
			}
		}
	}
      arr[pos1][pos2]=0;
	  secondmax = arr[0][0];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (secondmax < arr[i][j])
			{   
				secondmax = arr[i][j];
				pos1 = i;
				pos2 = j;
			}
		}
	}
	printf("Second Max: %d  Pos: [%d][%d]", secondmax, pos1, pos2);

}