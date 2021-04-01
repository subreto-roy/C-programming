#include<stdio.h>
void search(int *p, int n)
{
	int i, flag = 1;

	for (i = 0; i < 5; i++)
	{
		if (*(p + i) == n)
		{
			flag = 1;
		}
	}

	if (flag == 1)
	{
		for (i = 0; i < 5; i++)
		{
			if (*(p + i) == n)
			{
				printf("%d ", i);
			}

		}
	}
	else
	{
		printf("not found");
	}
}


int main()
	{
		int i, ar[5], searchnumber;
		for (i = 0; i < 5; i++)
		{
			scanf("%d", ar + i);
		}
		scanf("%d", &searchnumber);
		search(ar, searchnumber);
	}

