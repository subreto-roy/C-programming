#include<stdio.h>
void del(char str1[50], char str2[50]);
int main()
{

	char str1[100];
	char str2[100];
	gets_s(str1);
	gets_s(str2);
	del(str1, str2);
	return 0;
}
void del(char str1[50],char str2[50])
{
	char str3[50];
    int i, j, k, flag = 1, pos, len = 0;
    for (i = 0; str2[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; str1[i] != '\0'; i++)
	{
		for (j = 0, k = i; str2[j] != '\0'; j++, k++)
		{
			if (str1[k] == str2[j])
			{
				flag = 1;
				pos = i;
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
		for (i = 0; i<pos; i++)
		{
			str3[i] = str1[i];

		}

		for (i = i, j = pos + len; str1[j] != '\0'; j++, i++)
		{
			str3[i] = str1[j];
		}

		str3[i] = '\0';
		printf("%s\n", str3);
	}


}