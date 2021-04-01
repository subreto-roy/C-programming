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
void numsearch(int data,int search)
{
	int flag = 0,pos;
	struct node *temp = head;
	while (temp != NULL)
	{
		if (temp->data == search)
		{
			flag = 1;
		}
		temp = temp->next;
	}
	if (flag == 1)
	{
		printf("found  ");
	}
	else
	{
		printf("not found ");
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
	int num, n, i,search;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		insert(num);
	}
	scanf("%d", &search);
	numsearch(num,search);
	//print();

}