#include<stdio.h>
void strncpy(char *src, char *dest, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		*dest = *src;
		src++;
		dest++;

	}
	*dest = '\0';
	
}
int main()
{
	char str1[50], str2[50];
	int n;
	gets_s(str1);
	scanf("%d", &n);
	strncpy(str1, str2,n);
	puts(str2);
}