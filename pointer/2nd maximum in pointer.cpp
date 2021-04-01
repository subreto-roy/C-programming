#include<stdio.h>
void secondmax(int *p)
{
	int max, i, pos = 0;
	max = *p;
	for (i = 0; i < 5; i++)
	{
		if (max < *(p + i))
		{
			max = *(p + i);
			pos = i;
		}
	}
	*(p + pos) = 0;
	max = *p;
	for (i = 0; i < 5; i++)
	{
		if (max < *(p + i))
		{
			max = *(p + i);
			//pos = i;
		}
	}
	printf("%d ", max);
}
int main()
{
	int i,arr[50];
	for (i = 0; i < 5; i++)
	{
		scanf("%d", arr + i);
	}
	secondmax(arr);
}