#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
void printlistrever(struct node *temp);
void inser(int data)
{
	struct node *temp = (struct node*) malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
		tail = temp;
		return;
	}
	tail->next = temp;
	tail = temp;
}
void printlistrever(struct node *temp)
{
	if (temp == NULL)
	{
		return;
	}
	printlistrever(temp->next);
	printf("%d ", temp->data);
}
void print()
{
	struct node *temp2 = head;
	while (temp2 != NULL)
	{
		printf("%d ", temp2->data);
		temp2 = temp2->next;
	}
	printf("\n");
}

int main()
{
	int n, i, num;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		inser(num);
		
	}
	
	print();
	printlistrever(head);


}