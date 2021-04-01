#include<stdio.h>
int GCD(int a, int b)
{
	if (b == 0)
		return a;
	else
		return GCD(b, a%b);
}
int main()
{
	int a, b,c;
	scanf("%d %d", &a, &b);
	c=GCD(a, b);
	printf("%d", c);
}