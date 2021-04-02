#include<stdio.h>


void number(int num)
{
	int rem;
	while (num != 0)
	{
		rem = num % 10;
	}


	rem = num / 10;
	printf("%d",rem);

	
	
}
int main()
{
	int num;
	scanf("%d", &num);
	number(num);

}