#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    int *grades;
};

int main() {
    struct Student *student;
    student = (struct Student *)malloc(sizeof(struct Student));
    if (student == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    student->grades = (int *)malloc(3 * sizeof(int));
    if (student->grades == NULL) {
        printf("Memory allocation for grades failed\n");
        free(student);
        return 1;
    }

    printf("Enter roll number: ");
    scanf("%d", &student->roll);

    printf("Enter name: ");
    scanf("%s", student->name);

    printf("Enter 3 grades: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &student->grades[i]);
    }

    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += student->grades[i];
    }
    float average = sum / 3.0;

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student->roll);
    printf("Name: %s\n", student->name);
    printf("Grades: %d, %d, %d\n", student->grades[0], student->grades[1], student->grades[2]);
    printf("Average Grade: %.2f\n", average);

    free(student->grades);
    free(student);

    return 0;
}