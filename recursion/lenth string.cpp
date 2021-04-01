#include<stdio.h>
int lenth(char str[],int i)
{
	static int count=0;
	if (str[i]!= NULL)
	{
		count++;
		lenth(str, i+1);
			
	}
	else 
		return count;
	

}
int main()
{
	//int count;
	char str[100];
	int i = 0;
	gets_s(str);
	int count=lenth(str,i);
	printf("%d\n", count);
}