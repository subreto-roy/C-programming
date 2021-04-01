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
void printlowest()
{
	struct node *temp1=head;
	int min = temp1->data;
	
    while (temp1 != NULL)
	{
		if (min > temp1->data)
		{
			min = temp1->data;
		}
		temp1 = temp1->next;
	}
	printf("Min: %d\n", min);
	temp1 = head;

	while (temp1 != NULL)
	{
		temp1->data = temp1->data - min;
		temp1 = temp1->next;
	}
	
}
void print()
{
	struct node *temp1 = head;
	while (temp1 != NULL)
	{
		printf("%d ", temp1->data);
		temp1 = temp1->next;
	}
}
int main()
{
	int n, i,r, num;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		insert(num);
	}
	//print();
	printlowest();
	print();

}
