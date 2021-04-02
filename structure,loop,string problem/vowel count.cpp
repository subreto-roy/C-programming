#include<stdio.h>
int main()
{
	int i, n;
	char  arr[100];
		int count = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%c", &arr[i]);

	}
	for (i = 0; i < n;  i++)
	{
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
			count++;
	}



	printf("%d",count);
}