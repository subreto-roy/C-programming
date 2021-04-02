#include<stdio.h>
int main()
{
int j, i, arr[10], m, n;
  scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
       scanf("%d", &arr[i]);
	}
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					arr[i] = -1;
					arr[j] = -1;
				}

			}

		}
		for (i = 0; i <m; i++)
		{
		  printf("%d ", arr[i]);
		}
	}
