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
void midfound()
{
	struct node *singlestep = head;
	struct node *doublestep = head;
	while (doublestep != NULL && doublestep->next != NULL)
	{
		singlestep = singlestep->next;
		doublestep = doublestep->next->next;
	}
	printf("mid: %d ", singlestep->data);
}

int main()
{
	int n, i, num;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		insert(num);
	}
	midfound();

}