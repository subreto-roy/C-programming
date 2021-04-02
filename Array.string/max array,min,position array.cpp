#include<stdio.h>
int main()
{
	int i, j, n, arr[100],max,pos=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);

	}

	max = arr[0];
	for (i = 1; i < n; i++)
	{
		if (max<arr[i])
		{
			max = arr[i];
			pos = i;
		}
	}

	printf("%d,%d",max, pos);
}