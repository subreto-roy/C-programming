#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	int i, j, k, len;
	char str[100], temp;
	printf("enter the string:\n");
	scanf("%[^\n]s", str);
	len = strlen(str);
	for (i = 0, j = 0; j < len; j++)
	{
		if (!isalnum(str[j]) || j == len - 1)
		{
			if (j < len - 1)
			{
				k = j - 1;
			}
			else
			{
				k = j;
			}
			while (i < k)
			{
				temp = str[i];
				str[i] = str[k];
				str[k] = temp;
				i++;
				k--;
			}
			i = j + 1;
		}
	}
	printf("After reverse string is: %s\n", str);
	return 0;
}