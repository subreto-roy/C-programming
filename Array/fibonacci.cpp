#include<stdio.h>
int main()
{
	int i, n, f = 0, s = 1, third;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		third = f + s;
		printf("%d ", third);
		f = s;
		s = third;

	}
}
