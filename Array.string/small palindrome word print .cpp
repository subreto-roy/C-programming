#include<stdio.h>
#include<limits.h>
#include<ctype.h>
int isPal(int fst, int lst, char str[])
{
	int  i;

	for (i = fst; i <= lst; i++, lst--)
	{
		if (str[i] != str[lst])
		{
			return 1;
		}
	}
	
	return 0;
}



int main()
{
	int i, j, k, MinLen = INT_MAX, sPos, ePos;
	char str1[100];
	gets_s(str1);

	for (i = 0, j = 0; str1[i] != '\0'; i++)
	{
		if (isalpha(str1[i]) || isspace(str1[i]))
		{
			str1[j] = str1[i];
			j++;
		}
	}
	str1[j] = '\0';
	
	for (i = 0, j = 0; str1[i] != '\0'; i++)
	{

		if (str1[i] == ' ' || str1[i + 1] == '\0')
		{
			if (str1[i] == ' ')
			{
				k = i - 1;
			}
			else
			{
				k = i;
			}
			int r = isPal(j, k, str1);

			if (r == 0)
			{
				int len = (k - j) + 1;
				if (MinLen > len)
				{
					MinLen = len;
					sPos = j;
					ePos = k;
				}
			}
			j = i + 1;
		}
	}

	for (i = sPos; i <= ePos; i++)
	{
		printf("%c", str1[i]);
	}
	return 0;
}
