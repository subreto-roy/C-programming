#include<stdio.h>
int main()
	{
	int i, n, arr[100], sum, arr2[100], mini, sum1;
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);

		}

		mini = arr[0];
		for (i = 1; i < n; i++)
		{
			if (mini>arr[i])
			{
				mini = arr[i];
			
			}
			
		}
		for (i = 0; i < n; i++)
		{
			sum = arr[i] - mini;

			arr2[i] = sum;
		}

			sum1 = arr2[0];
			for (i = 1; i < n; i++)
			{
				if (sum1 < arr2[i])
				{
					sum1 = arr2[i];
				}
			}
			printf("%d", sum1);
				

		
	}
