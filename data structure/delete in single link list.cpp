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

void DeleteNode(int n)
{
	struct node* temp = head;
	if (n == 1)
	{
		head = temp->next;
		free(temp);
	}
	else
	{
		struct node *deletenode = head;
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
int main()
{
	int i, n, num;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		insert(num);
		//print();
	}
	printf("List before delete: \n");
	print();
	printf("Enter position to delete node: \n");
	int pos;
	scanf("%d", &pos);
	DeleteNode(pos);
	printf("List after delete: ");
	print();
	return 0;
}