#include<stdio.h>
int largest(int arr[],int n)
{
	static int i=0;
	static int max = arr[0];

	if (i >= n)
		return max;
	else if (max < arr[i])
	{
		max = arr[i];
		i++;
		largest(arr, n);
	}
	else
	{
		i++;
		largest(arr, n);
	}
	

}
int main()
{
	int i,n,arr[5], max;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	//int large = arr[0];
	max = largest(arr,n);
	printf("%d", max);
}