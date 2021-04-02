#include<stdio.h>
void revarse(char str1[50], char str2[50],int n);
int main()
{
	int n;
	char str1[50];
	char str2[50];
	fflush(stdin);
	gets_s(str1);
	scanf("%d", &n);
	revarse(str1, str2,n);
	printf("%s ", str2);
	return 0;

}
void revarse(char str1[50], char str2[50],int n)
{
	int i, j, count = 0;
	for (i = 0; i<n ; i++)
	{
		count = count + 1;
	}
	for (i = count - 1, j = 0; i >= 0; i--, j++)
	{
		str2[j] = str1[i];
	}
	str2[j] = '\0';
}