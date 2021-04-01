#include<stdio.h>
void ismax(int *p)
{
	int max, i;
	max = *p;
	for (i = 0; i < 5; i++)
	{
		if (max < *(p+i))
		{
			max = *(p+i);
		}
	}
	printf("%d", max);
}
int main()
{
	int i,arr[5];
	for (i = 0; i < 5; i++)
	{
		scanf("%d", arr + i);
	}
	ismax(arr);
	return 0;

}