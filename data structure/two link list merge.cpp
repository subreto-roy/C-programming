#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *head1 = NULL;
struct node *head2 = NULL;
struct node *end1 = NULL;
struct node *end2 = NULL;
void insert1(int data1)
{
	
	struct node *temp1 = (struct node*)malloc(sizeof(struct node));
	
	temp1->data = data1;
	temp1->next = NULL;
	

	if (head1 == NULL)
	{
		head1 = temp1;
		end1 = temp1;

		return;
	}
	end1->next = temp1;
	end1 = temp1;
	
}
void insert2(int data2)
{
	struct node *temp2 = (struct node*)malloc(sizeof(struct node));
	temp2->data = data2;
	temp2->next = NULL;
	if (head2 == NULL)
	{
		head2 = temp2;
		end2 = temp2;
		return;
	}
	end2->next = temp2;
	end2 = temp2;
}

void print();

void merge()
{
	struct node *cur = head1;
	while (cur->next != NULL)
		cur = cur->next;
	cur->next = head2;

	

}

void sort1()
{
	struct node *i, *j;
	int temp1;
	for (i = head1; i != NULL; i = i->next)
	{
		for (j = i->next; j != NULL; j = j->next)
		{
			if (i->data > j->data)
			{
				temp1 = i->data;
				i->data = j->data;
				j->data = temp1;
			}
		}
	}
}

void print()
{
	struct node* temp1 = head1;
	while (temp1 != NULL)
	{
		printf("%d ", temp1->data);
        temp1 = temp1->next;
		
	}

}
int main()
{
	int num1, num2, n, i,j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &num1);
		insert1(num1);
		
	}
	for (j = 1; j <= n; j++)
	{
		scanf("%d", &num2);
		insert2(num2);
	}
	merge();
	//Pause(3000);
	//getchar();
	sort1();
	print();
	
}
