#include<stdio.h>
int main()
{
	int i, n,pos, arr[100];
	scanf("%d", &n);


	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	scanf("%d", &pos);
	for (i = pos; i<n-1; i++)
	{
		arr[i] = arr[i + 1];
	}
	

	for (i = 0; i < n - 1; i++)
	{
		printf("%d ", arr[i]);
	}
}

