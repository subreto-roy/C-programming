#include<iostream>
#include<cstring>
#define SCORE_CARD_SIZE 100
using namespace std;

struct Player
{
	char name[100];
	int goals;
};

struct ScoreCard
{
	struct Player list[SCORE_CARD_SIZE];
	int size;
};

void insertAt(ScoreCard *s, Player p, int index)
{
	if (s->size >= SCORE_CARD_SIZE)
	{
		cout << "Can not add. List Full!" << endl;
	}
	else
	{
		for (int i = s->size; i>index; i--)
		{
			strcpy(s->list[i].name, s->list[i - 1].name);
			s->list[i].goals = s->list[i - 1].goals;
		}
		strcpy(s->list[index].name, p.name);
		s->list[index].goals = p.goals;
		s->size++;
	}
}
void insertLast(ScoreCard *s, Player p)
{
	if (s->size >= SCORE_CARD_SIZE)
	{
		cout << "Can not add. List Full!" << endl;
	}
	else
	{
		strcpy(s->list[s->size].name, p.name);
		s->list[s->size].goals = p.goals;
		s->size++;
	}
}

void deleteAt(ScoreCard *s, int index)
{
	if (s->size <= 0)
	{
		cout << "Can not add. List Full!" << endl;
	}
	else
	{
		for (int i = index; i<s->size; i++)
		{
			strcpy(s->list[i].name, s->list[i + 1].name);
			s->list[i].goals = s->list[i + 1].goals;
		}
		s->size--;
	}
}


void deleteLast(ScoreCard *s)
{
	if (s->size <= 0)
	{
		cout << "Can not Delete!" << endl;
	}
	s->size--;
}

void printScoreCard(ScoreCard *s)
{
	for (int i = 0; i<s->size; i++)
	{
		cout << s->list[i].name << ":" << s->list[i].goals << endl;
	}
	cout << "End of List" << endl << endl;
}

int main()
{


	Player hkane;
	strcpy(hkane.name, "Harry Kane");
	hkane.goals = 5;

	Player lukaku;
	strcpy(lukaku.name, "Romelu Lukaku");
	lukaku.goals = 4;

	Player ronaldo;
	strcpy(ronaldo.name, "Christiano Ronaldo");
	ronaldo.goals = 4;


	ScoreCard worldcup;
	worldcup.size = 0;
	printScoreCard(&worldcup);

	insertLast(&worldcup, hkane);
	insertLast(&worldcup, lukaku);
	insertLast(&worldcup, ronaldo);

	printScoreCard(&worldcup);

	Player messi;
	strcpy(messi.name, "Lionel Messi");
	messi.goals = 4;
	insertAt(&worldcup, messi, 1);
	insertAt(&worldcup, messi, 3);

	printScoreCard(&worldcup);

	deleteAt(&worldcup, 1);
	printScoreCard(&worldcup);

	deleteLast(&worldcup);
	printScoreCard(&worldcup);





	return 0;
}