#include<stdio.h>
int main() {
	/*int n,i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j <= i)
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
/*int i, j, n;
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
	for (j = 1; j <= n; j++)
	{
		if (j >= i)
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
/*int i, j, n1,n2;
scanf("%d", &n1);
scanf("%d", &n2);
for (i = 1; i <= n1; i++)
{
	for (j = 1; j <= n2; j++)
	{
		if (j >=6-i && j<=4+i)
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
/*int i, j, n1,n2;
scanf("%d", &n1);
scanf("%d", &n2);
for (i = 1; i <= n1; i++)
{
	for (j = 1; j <= n2; j++)
	{
		if (j >= i && j<=10-i)
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
/*int i, j, n1,n2;
	scanf("%d", &n1);
	scanf("%d", &n2);
	for (i = 1; i <= n1; i++)
	{
		for (j = 1; j <= n2; j++)
		{
			if (j <=6- i || j>=4+i)
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
	/*int i, k = 0, j;
	for (i = 1; i <= 9; i++)
	{
		i <= 5 ? k++ : k--;
		for (j = 1; j <= 9; j++)
		{
			if (j >= 6 - k && j <= 4 + k)
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
	/*int i, j,k=1, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{

		for (j = 1; j <= n; j++)

		{
			if (j <= i)
			{
				printf("%d", k);

			}
			else
			{
				printf(" ");
			}

		}

		printf("\n");
		k++;
	}
	*/
	/*int i, j, n, k;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		k = 1;
		for (j = 1; j <= n; j++)
		{
			if (j <=6-i)
			{
				printf("%d",k);
			}
			else
			{
				printf(" ");
			}
			k++;

		}
		printf("\n");
	}
	*/
	//vai 8 no hoi na.
	/*int i, j, n, k=1;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{

		for (j = 1; j <= n; j++)
		{
			if (j <= 6 - i)
			{
				printf("%d", k);
			}
			else
			{
				printf(" ");
			}


		}
		printf("\n");


	}
	*/
	//vai 9 no same
	/*int i, j, n, k;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		k = 1;
		for (j = 1; j <= n; j++)
		{
			if (j <= 6 - i)
			{
				printf("%d", k);
			}
			else
			{
				printf(" ");
			}
			k++;

		}
		printf("\n");
	}*/
// 10 no
	/*int i, j, n, k;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		k = 1;
		for (j = 1; j <= n; j++)
		{
			if (j <=i)
			{
				printf("%d", k);
			}
			else
			{
				printf(" ");
			}
			k++;

		}
		printf("\n");
	}*/
	//11 no pari nai
/*
	int i, j, n, k=0;
	scanf("%d", &n);

	for (i =1; i <= n; i++)
	{

		for (j = 1; j <= n; j++)
		{
			if (j <=i)
			{
				printf("%d", k);
			}
			else
			{
				printf(" ");
			}


		}
		printf("\n");
		k++;
	}
	*/
	//12 no same
	/*int i, j, n1, n2, k;
	scanf("%d %d", &n1,&n2);

	for (i = 1; i <= n1; i++)
	{
		k = 1;
		for (j = 1; j <= n2; j++)
		{
			if (j >= 6 - i || j<=4+i)
			{
				printf("%d", k);
			}
			else
			{
				printf(" ");
			}

			k++;
		}

		printf("\n");


	}
	*/
//13 no
	/*int i, j, n, k;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		k = 1;
		for (j = 1; j <= n; j++)
		{
			if (j <=i)
			{
				printf("%d", k);
			}
			else
			{
				printf(" ");
			}
			k++;

		}
		printf("\n");
		k = k + 1;
	}
	*/
//14 no pari nai
/*int i, j,k=1;
for (i = 1; i <= 5; i++)
{
	
	for (j = 1; j <= 9; j++)

	{
		if (j >=6- i && j<=4+i)
		{
			printf("%d", k);
			
		}
		else
		{
			printf(" ");
		}
		k++;
	}

	printf("\n");


}


}*/


	//15 no
	/*int i, j, k;
	for (i = 1; i <= 5; i++)
	{
		k = 1;
		for (j = 1; j <= 5; j++)

		{
			if (j <= i)
			{
				printf("%d", k);
				k = 1 - k;
			}
			else
			{
				printf(" ");
			}

		}

		printf("\n");


	}
	*/
// 16 no
	/*char k;
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		k = 'A';
		for (j = 1; j <= 5; j++)

		{
			if (j <= i)
			{
				printf("%c", k);
				k++;
			}
			else
			{
				printf(" ");
			}

		}

		printf("\n");


	}
*/
// 17 no
/*char k = 'A';
int i, j;
for (i = 1; i <= 5; i++)
{

	for (j = 1; j <= 5; j++)

	{
		if (j <= i)
		{
			printf("%c", k);

		}
		else
		{
			printf(" ");
		}


	}

	printf("\n");
	k++;


}
*/
//18 no
/*int i, j;
for (i = 1; i <= 5; i++)
{

	for (j = 1; j <= 9; j++)

	{
		if (j >= 6-i && j<=4+i)
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














	











