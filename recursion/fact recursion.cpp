#include<stdio.h>

int sample(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * sample(n - 1);
	}

}
int main()
{
	int n;
	scanf("%d", &n);  ///3 
	int r = sample(n);
	printf("%d", r);
}