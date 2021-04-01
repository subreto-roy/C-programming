#include<stdio.h>

void printArray(int *p)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(p + i));
	}

}

int main()
{
	int arr[100], i;

	for (i = 0; i < 5; i++)
	{
		scanf("%d",arr+i);
	}

	printArray(arr);
	return 0;
}