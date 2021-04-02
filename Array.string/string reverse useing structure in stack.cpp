#include<stdio.h>
#define MAX 100
typedef struct st
{
	int top;
	char data[MAX];
}stack;


void push(stack *s, char data)
{
	if (s->top >= MAX)
	{
		printf("Error! list full");
	}

	else
	{
		s->top = s->top + 1;
		s->data[s->top] = data;
	}
}

char pop(stack *s)
{
	if (s->top == -1)
	{
		printf("Stack empty");
		return -1;
	}

	else
	{
		char item;
		item = s->data[s->top];
		s->top -= 1;
		return item;
	}
}
//int isEmty()
//{
//    return (s->top==-1)? 1 : 0;
//}

//void print()
//{
//    int i;
//    for(i=0;i<=s->top;i++)
//    {
//        printf("%c",s->data[i]);
//    }
//}

int main()
{
	stack s1;
	s1.top = -1;
	char str[100];
	gets_s(str);
	int i;

	for (i = 0; str[i] != '\0'; i++) ///abc
	{
		push(&s1, str[i]);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = pop(&s1);
	}

	printf("After Reverser: %s\n", str);

}
