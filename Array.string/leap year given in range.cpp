#include<stdio.h>
int main()
{
	int i, n1, n2;
	scanf("%d", &n1);
	scanf("%d", &n2);
	for (i = n1; i <= n2; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			printf("%d ", i);
		}
	}
	
	return 0;
	 
}