#include<stdio.h>


void number( int num)
{
	int i,rem, count = 0;
	while (num != 0)
	{
		rem = num % 10;
		if(rem==2)
		{
			
			count++;
		}
		num = num / 10;
	}
	printf("%d",count);
}
int main()
{
	int num;
	scanf("%d",&num);
	number(num);

}