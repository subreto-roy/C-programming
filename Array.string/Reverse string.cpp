#include<stdio.h>

int main()
{
	int i = 0, j = 0;
	char arr1[100], arr2[100];
	printf("Enter the String: \n");
	gets_s(arr1);

	while (arr1[i] != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		arr2[j] = arr1[--i];
		++j;
	}
	arr2[j] = '\0';

	printf("Reverse string: \n");

	for (i = 0; arr2[i] != '\0'; i++)
	{
		if (arr2[i + 1] == ' ' || arr2[i + 1] == '\0')
		{
			for (j = i; j >= 0 && arr2[j] != ' '; j--)
			{
				printf("%c", arr2[j]);
			}
			printf(" ");
		}
	}


	return 0;
}

