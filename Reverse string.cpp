#include<stdio.h>
int stringLen(char str[])
{
	static int  i = 0;
	if (str[i] == '\0')
		return i;
	i++;
	stringLen(str);
}
void reverseString(char str[], int len)
{
	static int  i = 0;
	if (i > len)
		return;
	else if (i <= len)
	{
		char tmp;
		tmp = str[len];
		str[len] = str[i];
		str[i] = tmp;
		i++;
		reverseString(str, len-1);
	}
}
int main()
{
	char str[100];
	gets_s(str);
	int len = stringLen(str)-1;

	reverseString(str,len);

	printf("After Reverse sting: %s\n", str);
	return 0;
}