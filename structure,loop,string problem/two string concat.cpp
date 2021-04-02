#include<stdio.h>
void str_ncat(char str1[30], char str2[30], int n);
int main()
{
	int n;
	char str1[30], str2[30];
	fflush(stdin);
	gets_s(str1);
	fflush(stdin);
	gets_s(str2);
	scanf("%d", &n);
	str_ncat(str1, str2, n);
	printf("%s", str2);
	return 0;


}
void str_ncat(char str1[30], char str2[30], int n)
{
	int i, j, lenth = 0;
	for (i = 0; str2[i] != '\0'; i++)
	{
		lenth = lenth + 1;
	}
	for (i = lenth, j = 0; j<n; i++, j++)
	{
		str2[i] = str1[j];
	}
	str2[i] = '\0';
	//puts(str2);
}
