#include<stdio.h>
int strLen(char *str)
{
	int i, count = 0;
	for (i = 0; *str != '\0'; i++)
	{
		count++;
		*str++;
	}
	return count;
}
int main()
{
	char str[50],r;
	gets_s(str);
	r=strLen(str);
	printf("%d", r);

}
