#include<stdio.h>
void isRotation(char str1[], char str2[])
{
	char tmp[100];
	int i, j,k,flag=1;

	for (i = 0; str1[i] != '\0'; i++)
	{
		tmp[i] = str1[i];
	}

	for (i = i, j = 0; str1[j] != '\0'; i++, j++)
	{
		tmp[i] = str1[j];
	}
	tmp[i] = '\0';
	for (i = 0; tmp[i] != '\0'; i++)
	{
		for (j = 0, k = i; str2[j] != '\0'; j++, k++)
		{
			if (tmp[k] == str2[j])
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
		printf("rotation");
	}
	else
	{
		printf("not rotation");
	}

}
int main()
{
	char str1[100];
	char str2[100];
	gets_s(str1);
	gets_s(str2);
	isRotation(str1, str2);
	return 0;
}