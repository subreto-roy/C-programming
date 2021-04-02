#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, n, arr[100][100], max, pos = 0,pos1=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			{
				arr[i][j] = rand()%10+1;
				printf("%d", arr[i][j]);

			}
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
				pos = i;
				pos1 = j;
				
			}
		}
	}
	

	printf("max=%d,pos=%d,pos1=%d", max, pos,pos1);

}