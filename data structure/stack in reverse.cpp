#include<stdio.h>
#include<string.h>
char stack[100];
int top = -1;
void push(char c)
{
	top = top + 1;
	stack[top] = c;
}
void pop()
{
	char c;
	c = stack[top];
	top = top - 1;
	printf("%c", c);
}
int main()
{
	char str[100];
	int i, len;
	gets_s(str);
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		push(str[i]);
	}
	for (i = 0; i < len; i++)
	{
		pop();
	}
}