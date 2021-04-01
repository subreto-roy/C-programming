#include<stdio.h>
void TOH(int n, char src, char dest, char aug)
{
	static int count = 0;
	//int count = 0;
	if (n == 1)
	{
		printf("move %d disc from %c to %c\n", n, src, dest);
		return;
	}
	
	TOH(n - 1, src, aug, dest);
	printf("move %d disc from %c to %c\n", n, src, dest); 
    TOH(n - 1, aug, dest, src);
	
	
	
}


int main()
{
	int n;
	char src, dest, aux;
	scanf("%d", &n);
	
	TOH(n, 'A', 'C', 'B');
}