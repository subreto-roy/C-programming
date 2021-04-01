#include<stdio.h>
int main()
{
	int i, j, k, flag = 1, pos, len = 0;

	char str1[100];
	char str2[100], str3[100];
	gets_s(str1);
	gets_s(str2);

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
			str3[i] = str1[i];  //strring 1 copy kore string 3 raklam

		}

		for (i = i, j = pos + len; str1[j] != '\0'; j++, i++)
		{    
			str3[i] = str1[j];
		}

		str3[i] = '\0';
		printf("After deleting sub string:: %s\n", str3);
    }


}