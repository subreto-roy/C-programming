#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void ar(int ar[100][100]);
int main()
{
	srand(time(NULL));
	int i, j, n, ar[100][100];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)

		{
			ar[i][j] = rand() % 8 + 1;
		}
	}
	void ar(int ar[100])
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)

		{
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}

	return 0;


}