#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student {
    int roll;
    char name[100];
};

int main() {
    struct Student* students[3];

    
    for (int i = 0; i < 3; ++i) {
        students[i] = (struct Student*)malloc(sizeof(struct Student));
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i]->roll);
        getchar(); 
        printf("Enter name for student %d: ", i + 1);
        fgets(students[i]->name, sizeof(students[i]->name), stdin);
        students[i]->name[strcspn(students[i]->name, "\n")] = '\0'; 
    }

    
    printf("\nStudent details in reverse order of entry:\n");
    for (int i = 2; i >= 0; --i) {
        printf("Roll Number: %d, Name: %s\n", students[i]->roll, students[i]->name);
    }

    
    for (int i = 0; i < 3; ++i) {
        free(students[i]);
    }

    return 0;
}
