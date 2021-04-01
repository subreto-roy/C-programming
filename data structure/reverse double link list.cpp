#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node* head = NULL;
struct node* tail = NULL;
void insertlast(int data)
{

	struct node *newnode = (struct node*) malloc(sizeof(struct node));
	
	newnode->data = data;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (head == NULL)
	{
		head = newnode;
		return;
	}
	struct node* cur = head;
	while (cur->next != NULL)
	{
		cur = cur->next;
	}

	cur->next = newnode;
	newnode->prev = cur;

}
void reverse()
{
	struct node* curr = head;
	struct node *temp=head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}

	 while(curr != NULL)
	{
		 printf("%d ", curr->data);
		 curr = curr->prev;
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
	printf("\n");

}
int main()
{
	int num, n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		insertlast(num);
		
	}
	reverse();
	//print();
}