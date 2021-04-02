#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct library {
	char Book_id[50];
	char author_name[50];
	float price;
	char  issue_date[15];
}info[1000];

int i, n;
void addBookInfo()
{
	
	printf("\nEnter How many books do you want to add: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Enter %d Book Information:: ", i + 1);
		printf("Book Name:: ");
		scanf(" %[^\n]", info[i].Book_id);
		printf("Author Name:: ");
		scanf(" %[^\n]", info[i].author_name);
		printf("Price:: ");
		scanf("%f", &info[i].price);
		printf("Issue date:: ");
		scanf(" %[^\n]", info[i].issue_date);

	}
}

void displayBookInfo()
{
	printf("All Stored Books:: \n");

	for (i = 0; i < n; i++)
	{
		printf("\n%d Book information:\n");
		printf("Book name: %s\n", info[i].Book_id);
		printf("Author Name: %s\n", info[i].author_name);
		printf("Price: %.1f\n", info[i].price);
		printf("Issue dated: %s\n", info[i].issue_date);
	}
}
void findAuthorsBook()
{
	char auth[20];
	printf("Enter an Author name:  ");
	scanf(" %[^\n]", auth);

	for (i = 0; i < n; i++)
	{
		if (strcmp(info[i].author_name, auth) == 0)
		{
			printf("\nBook %s ", info[i].Book_id);
		}
	}
}
void listCount()
{
	if (n != 0)
	{
		printf("Total stored Books: %d\n", n);
	}
	else
	{
		printf("Please stored some books first\n");
	}
}
void findBookPrice()
{
	float prc;
	printf("Enter a price:  ");
	scanf("%f", &prc);

	for (i = 0; i < n; i++)
	{
		if (prc == info[i].price)
		{
			printf("\n%s", info[i].price);
		}
	}
}
int main()
{
	int choice;
	
	while (1)
	{
		printf("Menu:: \n");
		printf("1 for Add book information\n");
		printf("2 for Display book infromation\n");
		printf("3 for Display all books of a given Author\n");
		printf("4 for List the count of books\n");
		printf("5 for Find all books for the given price\n");
		printf("6 for exit from the program\n");
		printf("Enter Your Choice:: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			addBookInfo();
			break;
		case 2:
			displayBookInfo();
			break;
		case 3:
			findAuthorsBook();
			break;
		case 4:
			listCount();
			break;
		case 5:
			findBookPrice();
			break;
		case 6:
			exit(0);
			break;
		default:
		{
			printf("INVALID");
		}

		}
	}

	return 0;
}




