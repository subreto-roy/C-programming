#include<stdio.h>
#define max 100
#include<stdlib.h>
typedef struct st
{
	int front;
	int tail;
	int data[max];

}queue;
int isempty(queue *s)
{
	return s->front == -1 && s->tail == -1 ? 1 : 0;
}
void enqueue(queue *q, int item)
{
	if (q->tail == max - 1)
	{
		printf("queue is full");
	}
	else if (isempty(q))
	{
		//q->front = q->tail = 0;
		q->front = 0;
		q->tail = 0;
		q->data[q->tail] = item;
	}
	else
	{
		q->tail = q->tail + 1;
		q->data[q->tail] = item;
	}
}
int dequeue(queue* q)
{
	int item;
	if (isempty(q))
		return -1;
	else if (q->front == q->tail)
	{
		q->front = -1;
		q->tail = -1;
	}
	else
	
																																																																																																																																																																																																																																																													
	
	{
		q->front = q->front + 1;
	}
}

void display(queue *q)
{
	int i;
	printf("Queue : \n");
	for (i = q->front; i <= q->tail; i++)
	{
		printf("%d ", q->data[i]);
	}
	printf("\n");
}

int main()
{
	queue s1;
	s1.front = -1;
	s1.tail = -1;
	int n, i,x;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d",&x);
		enqueue(&s1,x);
	}
	display(&s1);

	dequeue(&s1);

	display(&s1);

}