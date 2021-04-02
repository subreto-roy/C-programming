#include<stdio.h>
int main()
{
	int i, j, n, arr[100], max,min, pos = 0,pos1=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);

	}

	min = arr[0];
	for (i = 1; i < n; i++)
	{
		if (min>arr[i])
		{
			min = arr[i];
			pos1 = i;
		}
	
	}
	max = arr[0];
	for (i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			pos = i;
		}
	}

	printf("max=%d, index=%d\n,min=%d, index=%d\n",max, pos,min, pos1);
}