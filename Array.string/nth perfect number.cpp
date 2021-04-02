#include<stdio.h>
int main()
{
	int num, i, j, sum = 0;
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j<i; j++)
		{
			if (i%j == 0)
			{
				sum = sum + j;
			}

		}

		if (sum == i)
		{
			printf("%d ", i);
		}
		sum = 0;

	}


}

