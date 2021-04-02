#include<stdio.h>

int main()
{
	int i, n, arr[100], searchKey,flag=0,pos;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &searchKey);

	for (i = 0; i < n; i++)
	{
		if (arr[i] == searchKey)
		{
			flag = 1;
		}
	}

	if (flag == 1)
	{
		printf("Found at position: ");
		for (i = 0; i < n; i++)
		{
			if (arr[i] == searchKey)
			{
				printf("%d ", i);
			}
		}
	}
	else
	{
		printf("Not found\n");
	}
	return 0;
}