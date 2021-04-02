#include<stdio.h>
#include<stdlib.h>
void rownumber(int arr[][], int n);
int main()
{
	int i, j, arr[50][50], n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 10 + 1;
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
     rownumber(arr, n);
	 return 0;
}
void rownumber(int arr[][],int n)
{
	int i, j, max, sum = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum = sum + arr[i][j];
		}
	}
	max = arr[0][0];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (sum < max)
			{
				max = arr[i][j];
		   }
		}
	}
	printf("%d", max);

}





