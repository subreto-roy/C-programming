#include<stdio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node* next;
};
struct node *Head = NULL;
struct node *end = NULL;
void Insert(int data)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->value = data;
	temp->next = NULL;

	if (Head == NULL)
	{
		Head = temp;
		end = temp;
		return;
	}
	end->next = temp;
	end = temp;

}

void delete_node(int n)
{
	struct node* temp = Head;
	if (n == 1)
	{
		Head = temp->next;
		free(temp);
	}
	else
	{
		struct node *deletenode = Head;
		int i;
		for (i = 1; i <= n - 2; i++)
		{
			deletenode = deletenode->next;
		}
		struct node *nth = deletenode->next;
		deletenode->next = nth->next;
		free(nth);

	}
}
void alternate_del()
{
	struct node *cur = Head;
	int count = 0;
	while (cur != NULL)
	{
		count++;
		if (count % 2 != 0)
		{
			printf("%d", cur->value);
			delete_node(count);
			
		}
        cur = cur->next;
	}
}


int main()
{
	int i, n, x;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{

		scanf("%d", &x);
		Insert(x);
        
	}
	alternate_del();
	

	return 0;

}