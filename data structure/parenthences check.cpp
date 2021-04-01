#include<stdio.h>
#include<stdlib.h>
#define max 100
typedef struct s
{
	int top;
	char data[max];
}stack;
int isempty(stack *s)
{
	return (s->top == -1) ? 1 : 0;
}
void push(stack *s, char data)
{
	if (s->top >= max-1)
	{
		printf("error");
	}
	else
	{
		s->top = s->top + 1;
		s->data[s->top] = data;
	}
}
void pop(stack *s)
{
	if (s->top == -1)
	{
		printf("stack is empty");
		return ;
	}
	else
	{
		//int item;
		//item = s->data[s->top];
		s->top -= 1;
	}
}
bool arepair(char opening, char closing)
{
	if (opening == '(' && closing == ')')
		return true;
	else if (opening == '{' && closing == '}')
		return true;
	else if (opening == '[' && closing == ']')
		return true;
	return false;
}
bool arebalanced(stack *s, char str[])
{
	int i;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == '(' || str[i] == '{' || str[i] == '[')
		{
			push(s, str[i]);

		}
		else if ((str[i] == ')' || str[i] == '}' || str[i] == ']'))
		{
			if (isempty(s) || !(arepair(s->data[s->top], str[i])))
			{
				return false;
			}
			else
			{
				pop(s);
			}
		}
		
	}

	return isempty(s) ? true : false;
}


int main()
{
    stack s1;
	s1.top = -1;
	int i;
	//char res;
	char str[100];
	gets_s(str);
	bool res=arebalanced(&s1, str);
	if (res == true)
	{
		printf("parenthesis");
	}
	else
	{
		printf("not parenthesis");
	}
}