#include<stdio.h>
int main()
{
	int i, n, newnum, pos, arr[100];
	scanf("%d", &n);


	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &newnum);
	scanf("%d", &pos);
	
	arr[pos] = newnum;

	for (i = 0; i < n ; i++)
	{
		printf("%d ", arr[i]);
	}
}
