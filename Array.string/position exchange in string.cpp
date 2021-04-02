
#include<stdio.h>

int main()
{
	int i, j, firstPos, secondPos;
	char str[100], str2[100];
	printf("Enter string: \n");
	gets_s(str);
	printf("Enter first position: \n");
	scanf("%d", &firstPos);
	printf("Enter second position: \n");
	scanf("%d", &secondPos);

	for (i = 0; i<firstPos; i++)
	{
		str2[i] = str[i];
	}
	str2[i] = '\0';
	for (i = i, j = secondPos + 1; str[j] != '\0'; i++, j++)
	{
		str2[i] = str[j];
	}
	str2[i] = '\0';
	printf("%s", str2);
	return 0;
}
