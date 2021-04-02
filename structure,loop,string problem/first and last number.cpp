#include<stdio.h>
int l,f;

void number(int n)
{
	int rem;
	l = n % 10;
	while (n != 0)
	{
		rem = n % 10;
		n= n / 10;

		
	}
	f = rem;

	//printf("%d, %d",rem,l);
}
int main()
{
	int n;
	scanf("%d", &n);
	number(n);
	printf("first: %d\nlast: %d",f,l);
 }