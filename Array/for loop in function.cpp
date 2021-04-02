#include<stdio.h>

void number(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		printf("%d ", i);
	}
}




int main()
{
	int i,n;
	scanf("%d", &n);
	number(n);

}