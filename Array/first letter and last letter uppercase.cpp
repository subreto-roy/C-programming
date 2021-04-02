#include<stdio.h>
void uplow(char str1[50]);

int main()
{
	char str1[50];
	gets_s(str1);

	uplow(str1);

	
	return 0;
}
void uplow(char str1[50])
{
	int i;
	
	for (i = 0; str1[i] != '\0'; i++)
	{
		if (i == 0)
		{
			str1[i] = str1[i] - 32;
		}
		else if (str1[i] == ' ')
		{
			str1[i - 1] = str1[i - 1] - 32;
			str1[i + 1] = str1[i + 1] - 32;
		}
		else if (str1[i + 1] == '\0')
		{
			str1[i] = str1[i] - 32;
		}
	}
	
	str1[i] = '\0';
	printf("%s", str1);
	

}