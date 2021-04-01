#include<stdio.h>
void ascending(char str[100]);

int main()
{
	char str[100];

	gets_s(str);
	ascending(str);
	return 0;
}

void ascending(char str[100])
{
int i, j;
char temp;
   for (i = 0; str[i]!='\0'; i++)
	{
		for (j = i + 1; str[j]!='\0'; j++)
		{
			if (str[j]<str[i])
			{
				temp = str[j];
				str[j] = str[i];
				str[i] = temp;
			}
		}
	}
	printf("%s\n", str);

}