#include <stdio.h>
#include <stdlib.h>

typedef struct a {
	int value;
	struct a* next;
}node;

node* head=NULL;

void insert_last(int val) {
	node* temp = (node*)malloc(sizeof(node));
	temp->value = val;
	temp->next = NULL;
	if (head == NULL) {
		head = temp;
		return;
	}
	else {
		node* cur = head;
		while ((cur->next) != NULL) {
			cur = cur->next;
		}
		cur->next = temp;
	}
}

void insert_first(int val) {
	node* temp = (node*) malloc(sizeof(node));
	temp->value = val;
	temp->next = head;
	head = temp;


	
}

void print_list() {
	node* cur = head;
	printf("Linked list contents\n");
	while (cur != NULL) {
		printf("%d ", cur->value);
		cur = cur->next;
	}
	printf("\n");
	return;
}

void delete_last() {
	node *prev=NULL,*temp = head;
	
	while (temp->next != NULL)
	{
		prev = temp;
		temp = temp->next;
	}
	prev->next = NULL;
	free(temp);
}

void delete_first() {
	node* temp = head;
	head = head->next;
	free(temp);
	
}

void insert_after_value(int where, int after) {
	node* temp = (node*)malloc(sizeof(node));
	temp->value = after;
	temp->next = NULL;

	node* cur = head;
	if (head == NULL) {
		printf("Cannot be inserted\n");
	}
	while (cur->value != where) {
		cur = cur->next;
		if (cur == NULL) {
			printf("Cannot be inserted\n");
			return;
		}
	}
	if ((cur->next) == NULL) {
		cur->next = temp;
		
		return;
	}
	node* curnext = cur->next;
	temp->next = curnext;
	cur->next = temp;

}

void insert_before_value(int where, int after) {
	node* temp = (node*)malloc(sizeof(node));
	temp->value = after;
	temp->next = NULL;

	node* cur = head;
	if (head == NULL) {
		printf("Cannot be inserted\n");
	}
	node* prev = NULL;
	while (cur->value != where) {
		prev = cur;
		cur = cur->next;
		if (cur == NULL) {
			printf("Cannot be inserted\n");
			return;
		}
	}
	if ((cur->next) == NULL) {
		prev->next = temp;
		temp->next = cur;
		return;
	}
	temp->next=cur;
	prev->next = temp;

}

int search_list(int val) {
	node *temp=head;
	int flag = 0;
	while (temp != NULL)
	{
		if (temp->value == val)
		{
			flag = 1;
		}
		temp = temp->next;

	}
	if (flag == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main() {
	while (1) {
		printf("Enter your choice\n");
		printf("1. Insert last\n");
		printf("2. Insert first\n");
		printf("3. Delete last\n");
		printf("4. Delete first\n");
		printf("5. Insert after value\n");
		printf("6. Insert before value\n");
		printf("7. Search value\n");
		printf("8. Print\n");
		int choice;
		scanf("%d", &choice);
		if (choice == 1) {
			int val;
			scanf("%d", &val);
			insert_last(val);
		}
		else if (choice == 2) {
			int val;
			scanf("%d", &val);
			insert_first(val);
		}
		else if (choice == 3) {
			delete_last();
		}
		else if (choice == 4) {
			delete_first();
		}
		else if (choice == 5) {
			int where, value;
			scanf("%d %d", &where, &value);
			insert_after_value(where, value);
		}
		else if (choice == 6) {
			int where, value;
			scanf("%d %d", &where, &value);
			insert_before_value(where, value);
		}
		else if (choice == 7) {
			int val;
			scanf("%d", &val);
			if (search_list(val) == 1) {
				printf("The value is found\n");
			}
			else {
				printf("No value\n");
			}
		}
		else if (choice == 8) {
			print_list();
		}
		else {
			printf("Invalid input");
		}
	}
	return 0;
}
