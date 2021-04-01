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
void numsearch(int data, int search)
{
	int flag = 0, count=0;
	struct node *temp = head;
	while (temp != NULL)
	{
		count++;
		if (temp->data == search)
		{
			break;
		}
		temp = temp->next;
	}
	int i;
	temp = head;
	for (i = 1; i <=count - 2; i++)
	{
		temp = temp->next;
	}
	struct node *temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
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
	int num, n, i, search;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		insert(num);
	}
	scanf("%d", &search);
	numsearch(num, search);
	print();

}