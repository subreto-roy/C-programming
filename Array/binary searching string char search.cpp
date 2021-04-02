#include<stdio.h>
#include<string.h>

int main()
{
	int i, j, first, last, mid, flag = 1;
	char t;
	char search;
	char s[50];

	gets_s(s);
	scanf("%c", &search);
	int count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (j = 1; s[j] != '\0'; j++)
	{
		i = j - 1;
		t = s[j];
		while (t < s[i] && i >= 0)
		{
			s[i + 1] = s[i];
			i--;
		}
		s[i + 1] = t;

	}

	first = 0;
	last = count - 1;
	
	while (last <= first)
	{
		mid = (first + last) / 2;
		if (s[mid] == search)
		{
			printf("found ");
			break;
		}
		else if (search > s[mid])
		{
			last = mid + 1;
		}
		else
		{
			first = mid - 1;
		}
	}
	if (last > first)
	{
		printf("not found ");
	}
}