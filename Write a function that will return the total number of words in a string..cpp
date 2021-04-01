//Write a function that will return the total number of words in a string.
#include<stdio.h>
void tnw(char str[50]);
int main()
{
	char str[50];
	gets_s(str);
	tnw(str);
	return 0;
}
void tnw(char str[50])
{
	int i,j,k;
	int count = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}
	}
	printf("%d",count);

}