#include<stdio.h>
void countv(char *p,int count)
{
	int i;
	for (i = 0; *(p + i) != '\0'; i++)
	{
		if (*(p + i) == 'a' || *(p + i) == 'e' || *(p + i) == 'i' || *(p + i) == 'o' || *(p + i) == 'u' || *(p + i) == 'A' || *(p + i) == 'E' || *(p + i) == 'I' || *(p + i) == 'O' || *(p + i) == 'U')

		{
			count++;
		}
		else
		{
			count++;
		}
	}
}
int main()
{
	int count;
	char s[50];
	gets_s(s);
	countv(s,count);
}