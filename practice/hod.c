#include <stdio.h>

struct collage {
    char department[50];
    char name[50];
    int age;
    float salary;
};

int main() {
    
    struct collage col[4];
    struct collage *ptr;
    ptr = col;

    
    for (int i = 0; i < 4; i++) {
        printf("Enter the department: ");
        scanf("%s", ptr->department);
        printf("Enter HOD name: ");
        scanf("%s", ptr->name);
        printf("Enter age: ");
        scanf("%d", &ptr->age);
        printf("Enter salary: ");
        scanf("%f", &ptr->salary);
        ptr++;
    }

    
    ptr = col;

    
    for (int i = 0; i < 4; i++) {
        printf("\nDetails of HOD %d\n", i + 1);
        printf("Department: %s\n", ptr->department);
        printf("Name of HOD: %s\n", ptr->name);
        printf("Age: %d\n", ptr->age);
        printf("Salary: %.2f\n", ptr->salary);
        ptr++;
    }

    return 0;
}
