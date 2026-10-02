#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    union {
        struct Student *next;
        int flag;
    } u;
};

int main() {
    struct Student s;
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf(" %s", s.name);
    s.u.flag = 1;

    printf("Roll: %d, Name: %s, Flag: %d\n", s.roll, s.name, s.u.flag);

    return 0;
}
