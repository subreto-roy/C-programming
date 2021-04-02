#include<stdio.h>
 
void number(int num)
{
	int i,count=0;
	while(num!=0)
	{

		num=num / 10;
		count++;

	}
	printf("%d", count);
}
int main()
{
	int num;
	scanf("%d", &num);
	
	number(num);

}


