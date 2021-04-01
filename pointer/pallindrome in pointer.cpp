#include<stdio.h>
int ispalindrome(char *p1)
{
	//int i,len = 0,temp;
	//while (*p1 != '\0')
	//{
	//	len++;
	//    p1++;  
	//}
	//--p1;
	//for (i = 1; i <= len; i++)
	//{
	//	temp = *p1;
	//	*p1 = *p2;
	//	*p2 = temp;
	//	p1--;
	//	p2++;
	//}
	////*p2 = '\0';
	//if (*p1 == *p2)
	//{
	//	printf("palindrome");
	//}
	//else
	//{
	//	printf("not palindrome");
	//}

	char *s, *last;
	s = p1;
	for (int i = 0; *s != '\0'; i++)
		s++;

	last = s - 1;

	while (p1 <= last)
	{
		if (*p1 != *last)
		{
			return 0;
		}
		p1++;
		last--;
	}
	return 1;
    
}
int main()
{
	char str1[50];
	int r;
	//char str2[50];
	
	gets_s(str1);
	r=ispalindrome(str1);
	if (r == 1)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}


}