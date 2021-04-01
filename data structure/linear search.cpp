#include<stdio.h>
int main()
{
	int n, i, j,k, ar[50],flag=0;
	printf("enter number\n");
	scanf("%d", &n);
	printf("enter ur array\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("enter your search key\n");
	scanf("%d",&k);
	for (i = 0; i < n; i++)
	{
		if (ar[i] == k)
		{
			flag = 1;
		}
		
	}
	if (flag == 1)
	{
		printf("found\n");
	}
	else
	{
		printf("not found\n");
	}
}