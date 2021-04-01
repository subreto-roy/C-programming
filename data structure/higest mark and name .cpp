  #include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	char name[100];
	int age;
	struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
void insert(int age, char name[])
{
	struct node* temp = (struct node*) malloc(sizeof(struct node));
	
	temp->age = age;
	strcpy(temp->name,name);
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
void highest()
{

    char temp1[100];
	struct node *temp2 = head;
	int max=temp2->age;

	while(temp2!=NULL)
	{
			if (max<=temp2->age)
			{
				max = temp2->age;
				strcpy(temp1, temp2->name);
			}
			temp2 = temp2->next;
		
	}
	printf("Max age: %d  Name: %s\n", max, temp1);
	
}
void print()
{
	struct node *temp = head;
	while (temp != NULL)
	{
		printf("Age: %d\t %s\n", temp->age,temp->name);
		
		temp = temp->next;
	}

}
int main()
{
	int n, age;
	char name[100];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		fflush(stdin);
		scanf("%s%d", name,&age);
		insert(age,name);
	}
	highest();
	//print();
	
}