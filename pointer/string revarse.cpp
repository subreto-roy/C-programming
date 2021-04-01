#include<stdio.h>
#include<string.h>

void swap(char *p, char *q)
{
	int tmp;
	tmp = *p;
	*p = *q;
	*q = tmp;
}

void strRev(char *str)
{
	char *last = str + strlen(str) - 1;
	char tmp;

	while (str <= last)
	{
		swap(str, last);
		/*tmp = *str;
		*str = *last;
		*last = tmp;*/
		str++;
		last--;
	}
}
int main()
{
	char str[50];
	gets_s(str);
	strRev(str);
	puts(str);
	return 0;
}