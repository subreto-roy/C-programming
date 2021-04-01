//Print Lower Case element in Stack
#include<stdio.h>
#include<string.h>
#define MAX 101
typedef struct st
{
	int top;
	char data[MAX];
}stack;


//typedef struct st stack;

int isEmpty(stack *s)
{
	return s->top == -1;
}
void Push(stack*s, char item)
{
	if (s->top<MAX)
	{
		s->top = s->top + 1;
		s->data[s->top] = item;
	}

	else
	{
		printf("stack full\n");
	}
}
char Pop(stack *s)
{
	char item;
	if (isEmpty(s))
	{
		printf("stack is empty");
		return 0;
	}
	else
	{
		item = s->data[s->top];
		s->top = s->top - 1;

	}
	return item;
}


int main()
{
	stack s;
	s.top = -1;
	int n, i, x;
	char str[50], ch;
	gets_s(str);
	for (i = 0; str[i]; i++)
		Push(&s, str[i]);

	while (!isEmpty(&s))
	{
		ch = Pop(&s);
		if (ch >= 'a' && ch <= 'z')
			printf("%c", ch);

	}
}