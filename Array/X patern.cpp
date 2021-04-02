#include<stdio.h>
int main()
{
	char k = 'X';
	int i, j;
	for (i = 1; i <= 5; i++)
	{

		for (j = 1; j <= 5; j++)

		{
			if (i == 6-j  || j ==i)
			{
				printf("%c", k);

			}
			else
			{
				printf(" ");
			}

		}

		printf("\n");


	}
}

