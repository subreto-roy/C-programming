#include<stdio.h>
int main() {
	/*int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j >= 6-i && j <= 4 + i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");

	}*/

	/*
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j <= 6 - i || j >= 4 + i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}
	*/

	/*int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j >=i && j <=10-i )
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}






}
*/

/*int i,k=0, j;
for (i = 1; i <= 9; i++)
{
	i <= 5 ? k++ : k--;
	for (j = 1; j <= 9; j++)
	{
		if (j >=6-k && j <=4+k)
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}

	}
	printf("\n");
}






}
*/

/*int i, j,k;
for (i = 1; i <= 5; i++)
{
	for (j = 1; j <=5; j++)
	{
		if (j >=6-i)
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}

	}
	printf("\n");


}



for (i = 1; i <= 5; i++)
{
	for (k = 1; k <= 4; k++)
	{
		printf(" ");
	}
	for (j = 1; j <= 5; j++)
	{
		if (j <= 6 - i)
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}

	}
	printf("\n");


}
*/
int i, j,k;
for (i = 1; i <= 5; i++)
{
	k = 1;
	for (j = 1; j <= 5; j++)

	{
		if (j<=i)
		{
			printf("%d",k);
			k++;
		}
		else
		{
			printf(" ");
		}

	}

	printf("\n");


	}


}
*/
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j >= i && j <= 10 - i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}
}







