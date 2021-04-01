#include<stdio.h>
void findpower(int *base, int *exp)
{
	int i,pow=1;
	for (i = 1; i <= *exp; i++)
	{
		pow = pow * *base;
	}
	printf("%d", pow);
}
int main()
{
	int i, base, exp;
	scanf("%d %d", &base, &exp);
	findpower(&base, &exp);
	//printf("%d", pow);
}
