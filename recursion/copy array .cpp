#include<stdio.h>

void arrayCopy(int arr[],int arr2[], int n)
{
	static int i = 0;
	if (i >= n)
		return;
	arr2[i] = arr[i];
	i++;
	arrayCopy(arr, arr2, n);

}
int main()
{
	int i, n, arr[100],arr2[100];
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	arrayCopy(arr,arr2, n);
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}