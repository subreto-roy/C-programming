//Write a function that combines two string by alternatingly taking elements and store it in a new string, then print it.
#include<stdio.h>
void alt(char str1[50], char str2[50], char str3[50]);
int main()
{
	char str1[50];
	char str2[50];
	char str3[50];
	gets_s(str1);
	gets_s(str2);
	alt(str1, str2, str3);
	return 0;
}
void alt(char str1[50], char str2[50], char str3[50])
{
	int i, j, k = 0, l = 0;
	int len1 = 0, len2 = 0;
	for (i = 0; str1[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; str2[i] != '\0'; i++)
	{
		len2++;
	}
	for (i = 0; i < len1 + len2; i++)
	{
		if (i % 2 == 0 || str2[l]=='\0' )
		{
			str3[i] = str1[k++];
		}
		else if(i%2==1 || str1[k]=='\0')
		{
			str3[i] = str2[l++];
		}
	
	}
	str3[i] = '\0';
	printf("%s",str3);

}
