#include<stdio.h> 
#include<limits.h>

void MaxRepeatNumber(char str[50]);
int main()
{
	char str[50];
    gets_s(str);
	MaxRepeatNumber(str);
	return 0;

}
void MaxRepeatNumber(char str[50])
{
	int i, j, count, MaxRepeat;
	char maxElement;
	MaxRepeat = INT_MIN;
	for (i = 0; str[i]!='\0'; i++)
	{
		count = 1;
		for (j = i + 1; str[j]!='\0'; j++)
		{
			if (str[i] == str[j])
			{
				count++;
			}
		}
		if (MaxRepeat < count)
		{
			MaxRepeat = count;
			maxElement = str[i];
		}
	}
	printf("%c\n", maxElement);
	printf("%d", MaxRepeat);

}