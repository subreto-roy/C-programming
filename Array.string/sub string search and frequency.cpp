#include<stdio.h>

void maxsubstr(char str[30], char substr[30]);
int main()
{
	char str[30];
	char substr[30];
	gets_s(str);
	gets_s(substr);
	maxsubstr(str, substr);
	return 0;
}
void maxsubstr(char str[30], char substr[30])
{
	int i, j, k, flag = 1, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0, k = i; substr[j] != '\0'; j++, k++)
		{
			if (str[k] == substr[j])
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
			break;
		}
	}
	if (flag == 1)
	{
		count++;
	}
	
	
	printf("%d", count);
}

