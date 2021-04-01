#include<iostream>

#define ARR_SIZE 100
using namespace std;

typedef char mytype;
struct Stack
{
	mytype arr[ARR_SIZE];
	int top;
};

struct Queue
{
	mytype arr[ARR_SIZE];
	int rear;
	int front;
	int size;
};

void push(struct Stack *s, mytype c)
{
	s->arr[s->top] = c;
	s->top++;
}

mytype pop(struct Stack *s)
{
	s->top--;
	return s->arr[s->top];
}

int isStackEmpty(struct Stack *s)
{
	return s->top == 0;
}

int parenthesisCheck(char str[])
{
	struct Stack s;
	s.top = 0;

	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '[')
			push(&s, ']');
		else if (str[i] == '{')
			push(&s, '}');
		else if (str[i] == '(')
			push(&s, ')');
		else
			if (isStackEmpty(&s))
				return -1;
			else {
				char c = pop(&s);
				if (c != str[i])
					return -1;
			}
	}
	if (isStackEmpty(&s))
		return 1;
	else
		return -1;
}

void enqueue(struct Queue *q, mytype c)
{
	q->arr[q->rear] = c;
	q->rear = (q->rear + 1) % ARR_SIZE;
	q->size++;
}

mytype dequeue(struct Queue *q)
{
	mytype c = q->arr[q->front];
	q->front = (q->front + 1) % ARR_SIZE;
	q->size--;
	return c;
}

int isQueueEmpty(struct Queue *q)
{
	return q->size == 0;
}


int main()
{
	struct Stack s;
	s.top = 0;

	char name[] = "HELLO";
	for (int i = 0; name[i]; i++)
		push(&s, name[i]);

	while (!isStackEmpty(&s))
		cout << pop(&s);
	cout << endl;

	cout << ((parenthesisCheck("{}[]([])") == 1) ? "Parenthesis OK" : "Parenthesis Not OK") << endl;


	struct Queue q;
	q.size = 0;
	q.rear = 0;
	q.front = 0;

	for (int i = 0; i<6; i++)
		enqueue(&q, 'A' + i);

	while (!isQueueEmpty(&q))
		push(&s, dequeue(&q));

	while (!isStackEmpty(&s))
	{
		mytype c = pop(&s);
		cout << c;
		enqueue(&q, c);
	}
	cout << endl;

	return 0;
}