#include<stdio.h>

void swap(int *x, int *y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	int n1, n2;
	scanf("%d%d", &n1, &n2);
	swap(&n1, &n2);
	printf("After swapping n1= %d   n2= %d\n", n1, n2);
}