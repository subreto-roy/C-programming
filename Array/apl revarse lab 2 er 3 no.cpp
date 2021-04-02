#include<stdio.h>
void revarse(char str1[50],char str2[50]);
int main()
{
	char str1[50];
	char str2[50];
	fflush(stdin);
	gets_s(str1);
	revarse(str1, str2);
	printf("%s", str2);
	return 0;

}
void revarse(char str1[50], char str2[50])
{
	int i,j, count = 0;
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