#include<stdio.h>   
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;

};
//struct node *head = NULL;

void insert(struct node **head, int data)
{
	struct node *temp = (struct node*) malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if (*head != NULL)
	{
		temp->next = *head;
	}
	*head = temp;

}
void print(struct node **head)
{
	struct node *temp2 = *head;
	printf("List: ");
	while (temp2!=NULL)
	{
		printf(" %d", temp2->data);
		temp2 = temp2->next;
	}
	printf("\n");
}

int main()
{
	int i, n, num;
	struct node *head = NULL;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		insert(&head,num);
		print(&head);
	}
}