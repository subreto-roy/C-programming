#include<stdio.h>
int main()
{
	char str1[50];
	int i, rem, sum = 0;

	gets_s(str1);
	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] == '0')
		{
			sum = sum + 6;
		}
		else if (str1[i] == '1')
		{
			sum = sum + 2;
		}
		else if (str1[i] == '2')
		{
			sum = sum + 5;
		}
		else if (str1[i] == '3')
		{
			sum = sum + 5;
		}
		else if (str1[i] == '4')
		{
			sum = sum + 4;
		}
		else if (str1[i] == '5')
		{
			sum = sum + 5;
		}
		else if (str1[i] == '6')
		{
			sum = sum + 6;
		}
		else if (str1[i] == '7')
		{
			sum = sum + 3;
		}
		else if (str1[i] == '8')
		{
			sum = sum + 7;
		}
		else if (str1[i] == '9')
		{
			sum = sum + 6;
		}
	}
	printf("%d", sum);
}

	






