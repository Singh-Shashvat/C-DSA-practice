#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    void (*actions[2])(struct Student *);
};

void printStudent(struct Student *s) {
    printf("Roll: %d, Name: %s\n", s->roll, s->name);
}

void greetStudent(struct Student *s) {
    printf("Hello, %s! Welcome!\n", s->name);
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
        students[i].actions[0] = printStudent;
        students[i].actions[1] = greetStudent;
    }

    for (int i = 0; i < n; i++) {
        students[i].actions[0](&students[i]);
        students[i].actions[1](&students[i]);
    }

    return 0;
}
