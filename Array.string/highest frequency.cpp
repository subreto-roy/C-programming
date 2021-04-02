#include<stdio.h>
#include<stdlib.h>
void MaxRepeatNumber(int arr[], int n);
int main()
{
	int i, j, arr[50],n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		arr[i] = rand() % 10 + 1;
	}
	printf("Generated Array: \n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	MaxRepeatNumber(arr, n);
	
}
void MaxRepeatNumber(int arr[], int n)
{
	int i, j, count, MaxRepeat,maxElement;
	MaxRepeat = INT_MIN;
	for (i = 0; i < n; i++)
	{
		count = 1;
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (MaxRepeat < count)
		{
			MaxRepeat = count;
			maxElement = arr[i];
		}
	}
	printf("\nMaximum repeating number: %d Count: %d\n", maxElement, MaxRepeat);
	
}