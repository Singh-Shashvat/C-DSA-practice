#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    struct {
        unsigned int age : 5;    // 5 bits (0-31)
        unsigned int grade : 4;  // 4 bits (0-15)
    } info;
};

int main() {
    struct Student s;
    unsigned int tempAge, tempGrade;

    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf(" %s", s.name);

    printf("Enter age (0-31): ");
    scanf("%u", &tempAge);
    s.info.age = tempAge; 

    printf("Enter grade (0-15): ");
    scanf("%u", &tempGrade);
    s.info.grade = tempGrade; 

    printf("\nStudent Details:\n");
    printf("Roll: %d, Name: %s, Age: %u, Grade: %u\n", s.roll, s.name, s.info.age, s.info.grade);

    return 0;
}
