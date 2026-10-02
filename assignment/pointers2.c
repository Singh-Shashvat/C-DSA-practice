#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    struct Student *next;
};

void insertAtBeginning(struct Student **head, int roll, char name[]) {
    struct Student *newNode = (struct Student*)malloc(sizeof(struct Student));
    newNode->roll = roll;
    strcpy(newNode->name, name);
    newNode->next = *head;
    *head = newNode;
}

void printList(struct Student *head) {
    while (head) {
        printf("Roll: %d, Name: %s\n", head->roll, head->name);
        head = head->next;
    }
}

int main() {
    struct Student *head = NULL;
    int n, roll;
    char name[50];

    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter roll: ");
        scanf("%d", &roll);
        printf("Enter name: ");
        scanf(" %s", name);
        insertAtBeginning(&head, roll, name);
    }

    printf("\nStudent List:\n");
    printList(head);
    
    return 0;
}
