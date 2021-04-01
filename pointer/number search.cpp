#include<stdio.h>
int main()
{
	int i, j, n1, n2, ar1[50], ar2[50];
	scanf("%d", &n1);
	for (i = 0; i < n1; i++)
	{
		scanf("%d", &ar1[i]);
	}
	scanf("%d", &n2);
	for (j = 0; j < n2; j++)
	{
		scanf("%d", &ar2[j]);
	}
	for (i = 0; i < n2; i++)
	{
		for (j = 0; j < n1; j++)
		{
			if (ar2[i] == ar1[j])
			{
				printf("%d\n", j);
				break;
			}
		}
		if (j == n1)
		{
			printf("not found\n");
		}

	}
	


}