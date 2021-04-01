#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* prev;
	struct node* next;
};
struct node* head = NULL;
struct node* tail = NULL;
void insertfirst(int data)
{
	struct node *newnum = (struct node*) malloc(sizeof(struct node));
	newnum->data = data;
	newnum->next = NULL;
	newnum->prev = NULL;
	if (head == NULL)
	{
		head = newnum;
	}
	else
	{
		newnum->next = head;
		head->prev = newnum;
		head = newnum;
	}
}
void print()
{
	struct node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}
int main()
{
	int n, num, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		insertfirst(num);
		print();
	}
	//print();
}