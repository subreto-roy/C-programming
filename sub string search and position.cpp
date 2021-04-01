#include<stdio.h>
int main()
{
	int i, j, k;
	int pos,flag;
	char str1[100];
	char str2[100];
	gets_s(str1);
	gets_s(str2);
	for (i = 0; str1[i] != '\0'; i++)
	{
		for (j = 0, k = i; str2[j] != '\0'; j++,k++)
		{
			if (str1[k] == str2[j])
			{
				pos=i;
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
	
	printf("%d",pos);

}