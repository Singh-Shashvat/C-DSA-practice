//array of stuctures with pointer
#include <stdio.h>
struct employee
{
    int empno;
    char name[50];
    float salary;
};
int main()
{
    //array of structures
    struct employee emp[3];
    struct employee *ptr;
    ptr = emp;
    for (int i = 0; i < 2; i++)
    {
        printf("Enter details of employee %d\n", i + 1);
        printf("Enter employee id: ");
        scanf("%d", &ptr->empno);
        printf("Enter name: ");
        scanf("%s", ptr->name);
        printf("Enter salary: ");
        scanf("%f", &ptr->salary);
        ptr++;
    }
    ptr = emp;
    for (int i = 0; i < 2; i++)
    {
        printf("Details of employee %d\n", i + 1);
        printf("Employee number: %d\n", ptr->empno);
        printf("Name: %s\n", ptr->name);
        printf("Salary: %f\n", ptr->salary);
        ptr++;
    }
    return 0;
}