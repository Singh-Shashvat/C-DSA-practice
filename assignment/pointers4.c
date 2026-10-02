#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    struct Student *friends[3]; 
};

int main() {
    struct Student students[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter roll: ");
        scanf("%d", &students[i].roll);
        printf("Enter name: ");
        scanf(" %s", students[i].name);
        students[i].friends[0] = &students[(i + 1) % 3];
    }

    for (int i = 0; i < 3; i++) {
        printf("Student %d: Roll: %d, Name: %s\n", i + 1, students[i].roll, students[i].name);
        printf("Friend: %s\n", students[i].friends[0]->name);
    }

    return 0;
}
