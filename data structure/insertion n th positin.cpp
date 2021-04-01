 #include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head = NULL;
void insert(int data, int n)
{
	struct node *temp = (struct node*) malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if (n == 1)
	{
		temp->next = head;
		head = temp;
		//return;
	}
	else
	{
		struct node *current = head;
		int i;
		for (i = 1; i <= n - 2; i++)
		{
			current = current->next;
		}
		temp->next = current->next;
		current->next = temp;
	}
}
void print()
{
	struct node *current = head;
	while (current != NULL)
	{
		printf(" %d", current->data);
		current = current->next;
	}
	printf("\n");
}

int main()
{
	int n, i, pos, num;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d %d", &num,&pos);
		insert(num, pos);   
		print();
	}
	//scanf("%d", &pos);
	
	
}