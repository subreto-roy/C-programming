#include<stdio.h>
void findlcm(int *n1, int *n2)
{
	int i, gcd, lcm;
	for (i = 1; i <= *n1 && i <= *n2; i++)
	{
		if (*n1%i == 0 && *n2%i == 0)
		{
			gcd = i;
		}

	}
	lcm = (*n1 * *n2) / gcd;
	printf("%d", lcm);
}
int main()
{
int n1, n2, i, gcd, lcm;
scanf("%d %d", &n1, &n2);

findlcm(&n1, &n2);


return 0;
}

