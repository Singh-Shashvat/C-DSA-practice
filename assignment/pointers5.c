#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    struct Student *next;
};

void printRecursive(struct Student *head) {
    if (head == NULL) return;
    printf("Roll: %d, Name: %s\n", head->roll, head->name);
    printRecursive(head->next);
}

int main() {
    struct Student *head = NULL, *temp;
    int n, roll;
    char name[50];

    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        temp = (struct Student*)malloc(sizeof(struct Student));
        printf("Enter roll: ");
        scanf("%d", &temp->roll);
        printf("Enter name: ");
        scanf(" %s", temp->name);
        temp->next = head;
        head = temp;
    }

    printf("\nStudent List:\n");
    printRecursive(head);
    
    return 0;
}
