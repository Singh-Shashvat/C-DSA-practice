#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Department {
    char deptName[50];
    char location[50];
};

struct Employee {
    int id;
    char name[50];
    struct Department* dept;
};

int main() {
    struct Employee* emp = (struct Employee*)malloc(sizeof(struct Employee));
    emp->dept = (struct Department*)malloc(sizeof(struct Department));

    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);
    getchar(); // to ignore the newline character left by scanf

    printf("Enter Employee Name: ");
    fgets(emp->name, 50, stdin);
    emp->name[strcspn(emp->name, "\n")] = 0; // Remove trailing newline

    printf("Enter Department Name: ");
    fgets(emp->dept->deptName, 50, stdin);
    emp->dept->deptName[strcspn(emp->dept->deptName, "\n")] = 0;

    printf("Enter Department Location: ");
    fgets(emp->dept->location, 50, stdin);
    emp->dept->location[strcspn(emp->dept->location, "\n")] = 0;

    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp->id);
    printf("Name: %s\n", emp->name);
    printf("Department Name: %s\n", emp->dept->deptName);
    printf("Department Location: %s\n", emp->dept->location);

    free(emp->dept);
    free(emp);

    return 0;
}
