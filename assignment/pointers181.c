#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
    int id;
    char name[100];
    struct Employee *next;
};

void printEmployees(struct Employee *head)
{
    struct Employee *current = head;
    while (current != NULL)
    {
        printf("ID: %d, Name: %s\n", current->id, current->name);
        current = current->next;
    }
}

int main()
{
    struct Employee *head = NULL;
    struct Employee *temp = NULL;
    struct Employee *current = NULL;

    for (int i = 0; i < 3; i++)
    {
        temp = (struct Employee *)malloc(sizeof(struct Employee));
        if (temp == NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("Enter ID for employee %d: ", i + 1);
        scanf("%d", &temp->id);
        printf("Enter name for employee %d: ", i + 1);
        scanf("%s", temp->name);
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = temp;
        }
    }

    printf("\nEmployee details:\n");
    printEmployees(head);

    current = head;
    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}