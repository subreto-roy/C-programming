#include<stdio.h>
int main()
{
	int i, j, n,k, count = 0, arr[50],small;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//scanf("%d", &k);

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				small = arr[0];
				if (small > arr[i])
				{
					small = arr[i];
				}
			}
		}
	}
	
	printf("%d", small);

	return 0;
}