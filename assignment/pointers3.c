#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    void (*print)(struct Student *);
};

void printStudent(struct Student *s) {
    printf("Roll: %d, Name: %s\n", s->roll, s->name);
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter roll: ");
        scanf("%d", &students[i].roll);
        printf("Enter name: ");
        scanf(" %s", students[i].name);
        students[i].print = printStudent;
    }

    for (int i = 0; i < n; i++) {
        students[i].print(&students[i]);
    }

    return 0;
}
