#include<stdio.h>

void reverseArray(int *p, int n)
{
	static int i = 0;
	if (i >= n)
		return;
	else
	{
		int tmp = *(p + i);
		*(p + i) = *(p + n);
		*(p + n) = tmp;
		i++;
		n--;
		reverseArray(p, n);
	}

}

int main()
{
	int arr[100];
	int n, i;
	scanf("%d", &n);

	for (i = 0; i<n; i++)
	{
		scanf("%d", (arr + i));
	}

	reverseArray(arr, n - 1);
	printf("After Reverse: \n");

	for (i = 0; i<n; i++)
	{
		printf("%d ", *(arr + i));
	}
}