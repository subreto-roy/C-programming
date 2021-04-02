#include<stdio.h>
#include<stdlib.h>
int  nextGeneration(int arr[8][6],int r,int c);
int main()
{
	int i, j, arr[8][6],r,c;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 6; j++)
		{
			arr[i][j] = rand() % 9 + 1;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("Enter row & col: \n");
	scanf("%d%d", &r, &c);
	int getR=nextGeneration(arr,r,c);
	printf("Next Gen: %d\n", getR);
	return 0;
}
  int  nextGeneration(int arr[8][6],int r,int c)
{
	int i, j,max=-1;

	for (i = r - 1; i <= r + 1; i++)
	{
		for (j = c - 1; j <= c + 1; j++)
		{
			if ((i == r && j == c) || i < 0 || i>7 || j < 0 || j>5)
			{
				//continue;
				break;
			}
			else
			{
				if (arr[i][j] > max)
				{
					max = arr[i][j];
				}
			}
		}
	}

	return max;
}

