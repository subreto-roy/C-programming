#include <stdio.h>
struct student {
	char name[50];
	int id;
	float grade;
	char email[50];
};
int main() {
	int i;
	struct student directory[2];
	for (i = 0; i < 2; i++) {
		scanf("%d", &directory[i].id);
		scanf("%f", &directory[i].grade);
		scanf("%s", directory[i].name);
		scanf("%s", directory[i].email);
	}
	for (i = 0; i < 2; i++) {
		printf("Student #%d: %d %.2f %s %s\n\n", i, directory[i].id,
			directory[i].grade, directory[i].name,directory[i].email);
	}
	return 0;
}