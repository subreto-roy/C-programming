#include<stdio.h>
void findgcd(int *n1, int *n2)
{
	int i, gcd;
	for (i = 1; i <= *n1 && i <= *n2; i++)
	{
		if (*n1%i == 0 && *n2%i == 0)
		{
			gcd = i;
		}
	}
	printf("%d", gcd);
}
int main()
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	findgcd(&n1, &n2);
	

}