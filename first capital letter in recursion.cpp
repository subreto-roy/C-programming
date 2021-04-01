#include<stdio.h>
#include<string.h>

int firstCapital(char str[])
{
	static int i = 0;
	if (i<strlen(str))
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			return str[i];
		}
		i++;
		firstCapital(str);
	}
	else
	{
		return 0;
	}
}

int main()
{
	char str[100];
	int ret;
	gets_s(str);
	ret = firstCapital(str);
	if (ret == 0)
	{
		printf("Not found");
	}
	else
	{
		printf("Found. char is: %c\n", ret);
	}
	return 0;
}