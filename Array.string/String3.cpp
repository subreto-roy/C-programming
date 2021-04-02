#include <stdio.h>
int main()
{
	int i, j, k, flag = 0;
	char A[100], B[100];
	gets_s(A);
	gets_s(B);
	for (i = 0; A[i] != '\0'; i++)
	{
		for (j = 0, k = i; B[j] != '\0'; k++, j++)
		{
			if (B[j] == A[k])
			{
				flag = 1;
			}
			else
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d", i);
			break;
		}
	}



}





