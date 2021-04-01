#include<stdio.h>
int main()
{
	int i;
	char str1[100];
	char str2[100];
	gets_s(str1);
	gets_s(str2);
	for (i = 0; str1[i] == str2[i] && str1[i] != '\0'; i++);
	
	if (str1[i] > str2[i])
	{
		printf("%s",str1);
	}
	else if (str1[i] < str2[i])
	{
		printf("%s", str2);
	}
	else if (str1 == str2)
		printf("%s", str2);


}