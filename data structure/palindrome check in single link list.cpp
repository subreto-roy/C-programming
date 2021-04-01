#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
}node;

node* head1 = NULL, *head2 = NULL;

node* Insert(node* head, int data)
{
	node* temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = NULL;

	if (head == NULL)
	{
		head = temp;
	}
	else
	{
		node* cur = head;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}

		cur->next = temp;
	}
	return head;
}


node* ReverseList(node* head)
{
	node *current, *prevNode, *nextNode;
	current = head;
	prevNode = NULL;
	while (current != NULL)
	{
		nextNode = current->next;
		current->next = prevNode;
		prevNode = current;
		current = nextNode;
	}
	head = prevNode;
	return head;
}


void display(node* head)
{
	while (head != NULL)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

int main()
{
	int i, n;
	scanf("%d", &n);
	int x;

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &x);
		head1 = Insert(head1, x);
		//head2= Insert(head2,x);
	}


	node* temp = head1;

	while (temp != NULL)
	{
		head2 = Insert(head2, temp->data);
		temp = temp->next;
	}
	head2 = ReverseList(head2);
	display(head2);
	node* temp1 = head1;
	node* temp2 = head2;
	//int flag=0;
	while (temp1 != NULL)
	{
		if (temp1->data != temp2->data)
		{
			break;
		}
		temp1 = temp1->next;
		temp2 = temp2->next;
	}

	if (temp1 == NULL)
		printf("Palindrome   ");
	else
		printf("Not palindrome  ");

	return 0;
}