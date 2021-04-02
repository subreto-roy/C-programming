#include<stdio.h>
int main()
{
	int arr[50], n, k, i, j, min;
	int count=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
    }
	scanf("%d",&k);
	//min = arr[0];
	/*for (i = 0; i < n; i++)
	{
		//if (min > arr[i])
		{
			 count = 1;
			for (j = i + 1; j < n && arr[j] == arr[i]; j++)
			{
				count++;
			}
		}
	}*/
	count = arr[0];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}

		}

	}
	if (count == k)
	{
		printf("%d", count);
	}
	
}
