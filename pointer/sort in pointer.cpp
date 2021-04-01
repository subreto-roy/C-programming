#include<stdio.h>
void ascending(int *p)
{
	int i, j;
	int temp;
	for (i = 0; i<5; i++)
	{
		for (j = i + 1; j<5; j++)
		{
			if (*(p+j)<(*(p+i)))
			{
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	}
	

}

int main()
{
	int i, a[5];
	for (i = 0; i < 5; i++)
	{
		scanf("%d", a + i);
	}
	ascending(a);
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(a + i));
	}
}