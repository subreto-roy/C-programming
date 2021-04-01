#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;

};
struct node *head = NULL;
struct node *end = NULL;
void insert(int data)
{
	struct node *temp = (struct node*) malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
		end = temp;
		return;
	}
	end->next = temp;
	end = temp;
}
void sort(int data)
{
	struct node *i, *j;
	int temp;
	for (i = head; i != NULL; i=i->next)
	{
		for (j = i->next; j != NULL; j=j->next)
		{
			if (i->data > j->data)
			{
				temp = i->data;
				i->data = j->data;
				j->data = temp;
			}
		}
	}
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
	int num, n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d",&num);
		insert(num);
	}
	//printf("before sort");
	//print();
	sort(num);   
	printf("after sort");
	print();
}
