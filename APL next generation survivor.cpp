#include<stdio.h>
#include<stdlib.h>


int  nextGeneration(int arr[8][6], int r, int c)
{
	int i, j, nxtGen = -1;

	for (i = r - 1; i <= r + 1; i++)
	{
		for (j = c - 1; j <= c + 1; j++)
		{
			if ((i == r && j == c) || i < 0 || i>7 || j < 0 || j>5)
			{
				continue;
			}
			else
			{
				if (arr[i][j] > nxtGen)
				{
					nxtGen = arr[i][j];
				}
			}
		}
	}
	return nxtGen;
}
int main()
{
	int i, j, arr[8][6], arr1[8][6],flag=0;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 6; j++)
		{
			arr[i][j] = rand() % 10 + 1;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}


	printf("All the next generations: \n");
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 6; j++)
		{
			arr1[i][j] = nextGeneration(arr, i, j);
			printf("%d ", arr1[i][j]);
			if (arr1[i][j] == arr[i][j])
			{
				flag = 1;
			}

		}
		printf("\n");
	}

	if (flag==1)
	{
		printf("\nsurvivor Exists\n");
	}
	else
	{
		printf("\nnot survivor  \n");
	} 
	return 0;
}

