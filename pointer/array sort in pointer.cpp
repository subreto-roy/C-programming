#include<stdio.h>
void issort(int *p)
{
	int i, j,temp;
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (*(p + i) > *(p + j))
			{
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	}
	//return (*(p + i));
	/*for (i = 0; i < 5; i++)
	{
		printf("%d ", *(p + i));
	}*/
}
int main()
{
	int i,arr[50];
	for (i = 0; i < 5; i++)
	{
		scanf("%d", arr + i);
	}
	issort(arr);
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(arr + i));
	}
}