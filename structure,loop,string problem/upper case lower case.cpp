#include<stdio.h>
void uplow(char str1[50],char str2[50]);

int main()
{
	char str1[50];
	char str2[50];
	gets_s(str1);

	uplow(str1,str2);

	printf("%s\n",str2);
	return 0;
}
void uplow(char str1[50],char str2[50])
{
	int i,j,count=0;

	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] >= 'a' && str1[i] <= 'z')
		{
			str1[i] = str1[i] - 32;
		}
		else if (str1[i] >= 'A' && str1[i] <= 'Z')
		{
			str1[i] = str1[i] + 32;
		}
	}
	for (i = 0; str1[i] != '\0'; i++)
	{
		count = count + 1;
	}
	for (i = count - 1, j = 0; i >= 0; i--, j++)
	{
		str2[j] = str1[i];
	}
	str2[j] = '\0';

}