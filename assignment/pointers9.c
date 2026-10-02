#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    struct Student* (*getNext)(struct Student *);
};

struct Student* getNextStudent(struct Student *s) {
    struct Student *nextStudent = (struct Student*)malloc(sizeof(struct Student));
    printf("\nEnter next student roll: ");
    scanf("%d", &nextStudent->roll);
    printf("Enter next student name: ");
    scanf(" %[^\n]", nextStudent->name);
    nextStudent->getNext = getNextStudent;
    return nextStudent;
}

int main() {
    struct Student s;
    
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf(" %s", s.name);
    s.getNext = getNextStudent;

    struct Student *nextStudent = s.getNext(&s);
    
    printf("\nStudent Details:\n");
    printf("Roll: %d, Name: %s\n", s.roll, s.name);
    printf("Next Student -> Roll: %d, Name: %s\n", nextStudent->roll, nextStudent->name);

    free(nextStudent);
    return 0;
}
