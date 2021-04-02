#include<stdio.h>
void Rotation(char str1[30], char str2[30]);
int main()
{
	char str1[30];
	char str2[30];
	gets_s(str1);
	gets_s(str2);
	Rotation(str1, str2);
	return 0;

}
void Rotation(char str1[30], char str2[30])
{
	int i, j,k, flag=1,lenth=0, count = 0;
	char temp[50];
	char temp2[50];
	
	for (i = 0; str1[i] != '\0'; i++)
	{
		temp[i] = str1[i];
	}
	for (i = i, j = 0; str1[j] != '\0'; i++, j++)
	{
		
		temp[i] = str1[j];
	}
	temp[i] != '\0';

	
	puts(temp);
}
