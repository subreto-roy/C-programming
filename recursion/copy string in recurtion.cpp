#include<stdio.h>
void copystring(char s1[], char s2[])
{
	static int i = 0;
	if (s1[i] == '\0')
	{
		s2[i] = '\0';
		return;
	}
	s2[i] = s1[i];
	i++;
	copystring(s1, s2);
}
int main()
{
	char str1[100];
	char str2[100];
	gets_s(str1);
	copystring(str1, str2);
	printf("After Copied: %s", str2);
	return 0;
}
