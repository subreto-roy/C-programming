#include<stdio.h>
int main()
{
	int i, n1,n2, arr1[100], arr2[100], temp[100];
	scanf("%d", &n1);
	
	for (i = 0; i < n1; i++)
	{
		scanf("%d", &arr1[i]);
	}
	scanf("%d", &n2);
	for (i = 0; i < n2; i++)
	{
		scanf("%d", &arr2[i]);
	}

	for (i = 0; i < n1; i++)
	{
		temp[i] = arr1[i];
	}
	for (i = 0; i < n2; i++)
	{
		arr1[i] = arr2[i];
	}
	for (i = 0; i < n1; i++)
	{
		arr2[i] = temp[i];
	}
	
	printf("Array1: ");
	for (i = 0; i < n2; i++)
	{
		printf("%d ", arr1[i]);
	}

	printf("Array2: ");
	for (i = 0; i < n1; i++)
	{
		printf("%d ", arr2[i]);
	}

	
	
}