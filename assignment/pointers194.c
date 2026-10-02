#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int subCode;
    float grade;
} Subject;

typedef struct {
    int roll;
    char name[50];
    Subject *subjects;
} Student;

int main() {
    Student *student = (Student *)malloc(sizeof(Student));
    student->subjects = (Subject *)malloc(3 * sizeof(Subject));

    printf("Enter student roll number: ");
    scanf("%d", &student->roll);

    printf("Enter student name: ");
    scanf("%s", student->name);

    for (int i = 0; i < 3; i++) {
        printf("Enter subject %d code: ", i + 1);
        scanf("%d", &student->subjects[i].subCode);

        printf("Enter subject %d grade: ", i + 1);
        scanf("%f", &student->subjects[i].grade);
    }

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student->roll);
    printf("Name: %s\n", student->name);

    float totalGrade = 0;
    for (int i = 0; i < 3; i++) {
        printf("Subject %d Code: %d, Grade: %.2f\n", i + 1, student->subjects[i].subCode, student->subjects[i].grade);
        totalGrade += student->subjects[i].grade;
    }

    printf("Average Grade: %.2f\n", totalGrade / 3);

    free(student->subjects);
    free(student);

    return 0;
}