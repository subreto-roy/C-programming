#include<stdio.h>
void strRev(char *p,char *p1)
{
	int i, j, len = 0;
	for (i = 0; *p != '\0'; i++)
	{
		len++;
		p++;
	}
	--p;
	for (i=1;i<=len;i++)
	{
		*p1 = *p;
		p--;
		p1++;
	}
	*p1 = '\0';
}
int main()
{
	char str1[50],str2[50];
	gets_s(str1);
	strRev(str1,str2);
	puts(str2);
}