 #include<stdio.h>
#include<stdlib.h>
#define STACK_MAX 101
typedef struct
{   
	int top;
	int arr[STACK_MAX];
}stack;
void push(stack *s, int item)
{
	if (s->top == STACK_MAX - 1)
	{
		printf("stack full");
		return;
	}
	s->top = s->top + 1;
	s->arr[s->top] = item;
}
void pop(stack *s)
{
	if (s->top == -1)
	{
		printf("stack is full");
		return;
	}
	s->top -= 1;
}
void print(stack *s)
{
	int i;
	printf("stack: \n");
	for (i = 0; i <= s->top; i++)
	{
		printf("%d ",s->arr[i] );
	}
}
int main()
{
	stack mystack;
	mystack.top = -1;
	int n, i,x;

	while (1)
	{
		
		printf("\n1 for push\n");
		printf("2 for Pop\n");
		printf("3 for view stack\n");
		printf("4 for exit\n");
		printf("\nEnter choice: \n");
		int choice;
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("Enter data: \n");
			scanf("%d", &x);
			push(&mystack,x);
			break;
		case 2:
			pop(&mystack);
			break;   
		case 3:
			print(&mystack);
			break;
		default:
			printf("ERROR");
			exit(1);
		

		}
	}
}