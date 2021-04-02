#include<stdio.h>
void findAndReplace(char str2[30], char ch);
int main()
{
	char str2[30];
	char ch;
	gets_s(str2);
	scanf("%c", &ch);
	findAndReplace(str2, ch);
	printf("%s", &str2);
	return 0;


}
void findAndReplace(char str2[30], char ch)
{
	int i;
	for (i = 0; str2[i] != '\0'; i++)
	{
		if (str2[i] == ch)
		{
			str2[i] = '#';
		}
		
	}
}