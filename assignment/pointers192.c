#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
    int roll;
    char name[50];
    struct Student* next;
} Student;

typedef struct Queue {
    Student* front;
    Student* rear;
} Queue;

void enqueue(Queue* q, int roll, char* name) {
    Student* newStudent = (Student*)malloc(sizeof(Student));
    newStudent->roll = roll;
    strcpy(newStudent->name, name);
    newStudent->next = NULL;
    if (q->rear == NULL) {
        q->front = q->rear = newStudent;
    } else {
        q->rear->next = newStudent;
        q->rear = newStudent;
    }
}

void dequeue(Queue* q) {
   
    Student* temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    free(temp);
}

void displayQueue(Queue* q) {
    Student* temp = q->front;
    while (temp != NULL) {
        printf("Roll: %d, Name: %s\n", temp->roll, temp->name);
        temp = temp->next;
    }
}

int main() {
    Queue q;
    q.front = q.rear = NULL;

    for (int i = 0; i < 3; i++) {
        int roll;
        char name[50];
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &roll);
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", name);
        enqueue(&q, roll, name);
    }

    printf("\nQueue after enqueuing 3 students:\n");
    displayQueue(&q);

    dequeue(&q);

    printf("\nQueue after dequeuing 1 student:\n");
    displayQueue(&q);

    return 0;
}