#include <stdio.h>
struct student {
	char name[50];
	int id;
	float grade;
};
int main() {
	int i;
	struct student directory[5];
	for (i = 0; i < 5; i++) {
		scanf("%d", &directory[i].id);
		scanf("%f", &directory[i].grade);
		scanf("%s", directory[i].name);
	}
	for (i = 0; i < 5; i++) {
		printf("Student #%d: %d %.2f %s\n\n", i, directory[i].id,
			directory[i].grade, directory[i].name);
	}
	return 0;
}