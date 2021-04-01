#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int i,n,ar[500];
	scanf("%d", &n);
	for (i = 0; i <n; i++)
	{
		ar[i] = rand()%5+1;
	}
	for (i = 0; i <n; i++)
	{
		printf("%d ",ar[i]);
	}
	return 0;


}