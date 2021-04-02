#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j, n, arr[50][50], searchKey, flag = 0, pos2,pos1;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			{
				arr[i][j] = rand();
				printf("%d ", arr[i][j]);
			}
		}
		printf("\n");
	}
	scanf("%d", &searchKey);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			
				if (arr[i][j] == searchKey)
				{
					flag = 1;
					pos1 = i;
					pos2 = j;
				}
		}
	}

	if (flag == 1)
	{
		printf("Found at position: [%d][%d]",pos1,pos2);
		
	}
	else
	{
		printf("Not found\n");
	}
	return 0;
}