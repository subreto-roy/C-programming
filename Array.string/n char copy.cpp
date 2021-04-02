#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d", &n);
	char str1[50], str2[50];
	gets_s(str1);
	for (i = 0; i<n; i++)
	{
		str2[i] = str1[i];
	}
	str2[i] = '\0';
	printf("%s", str2);

}