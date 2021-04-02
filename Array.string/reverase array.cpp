#include<stdio.h>
int main()
{
	int i, j,k, n, arr[100], arr1[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
			for (i=n-1,j=0;i>=0; i--,j++)
		{
				arr1[j] = arr[i];
		}

			for (i = 0; i < n; i++)
		{
				printf("%d ", arr1[i]);
		}
	


}