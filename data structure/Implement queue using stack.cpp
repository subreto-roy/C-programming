#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define STACK_MAX 101
typedef struct
{
	int top;
	int data[STACK_MAX];
}stack;

bool isEmpty(stack *s)
{
	return s->top == -1;
}

void Push(stack *s, int item)
{
	if (s->top < STACK_MAX)
	{
		s->top = s->top + 1;
		s->data[s->top] = item;
	}
	else
	{
		printf("Stack is full\n");
		return;
	}
}

int Pop(stack *s)
{
	int item;

	if (isEmpty(s))
	{
		printf("Stack is empty");
		return -1;
	}
	else
	{
		item = s->data[s->top];
		s->top = s->top - 1;
	}

	return item;
}

void enqueue(stack *s1, int data)
{
	Push(s1, data);
}

int dequeue(stack *s1, stack *s2)
{

	if (isEmpty(s1) && isEmpty(s2))
	{
		printf("queue is empty");
		exit(0);
	}

	int x, y;
	while (!isEmpty(s1))
	{
		x = Pop(s1);
		Push(s2, x);
	}
	y = Pop(s2);

	///return all the element to stack 1
	while (!isEmpty(s2))
	{
		x = Pop(s2);
		Push(s1, x);
	}
	return y;
}
int main()
{
	stack s1, s2;
	s1.top = -1;
	s2.top = -1;
	int i, n, x;
	printf("Enter how many elements: \n");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &x);
		enqueue(&s1, x);
	}

	int r = dequeue(&s1, &s2);
	printf("Dequeue value is: %d\n", r);


	return 0;
}

/*

int ch;

printf("\n1 - Enqueue element into queue");
printf("\n2 - Dequeu element from queue");
printf("\n3 - Display from queue");
printf("\n4 - Exit");
create();
while (1)
{
printf("\nEnter choice");
scanf("%d", &ch);
switch (ch)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
printf("Wrong choice");
}
}
*/