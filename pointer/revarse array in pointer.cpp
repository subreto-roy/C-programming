#include<stdio.h>

void revArr(int *p, int n)
{
	int i, j,tmp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = *(p + i);
		*(p + i) = *(p + j);
		*(p + j) = tmp;
	}
	
}

int main()
{
	int i, n, arr[100];
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", arr+i);
	}

	revArr(arr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d ", *(arr+i));
	}
	return 0;
}