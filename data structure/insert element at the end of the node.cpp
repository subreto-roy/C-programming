#include<stdio.h>  
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;

};
struct node *head = NULL;
struct node *tail = NULL;


void insert(int data)
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
void print()
{
	struct node *temp2 = head;
	printf("list :");
	while (temp2 != NULL)
	{
		printf(" %d", temp2->data);
		temp2 = temp2->next;
	}
	printf("\n");

}
int main()
{
	int n, i, x;
	printf("how many element: \n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("enter the number: \n");
		scanf("%d", &x);
		insert(x);
		print();
	}
	return 0;
}