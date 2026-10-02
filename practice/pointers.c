#include<stdio.h>
#include<string.h>
struct Student
{
    char name[50];
    int age;
    float marks;
};
int main(){
    struct Student Student1;
    struct Student *Ptr;
    Ptr=&Student1;
    strcpy(Ptr->name,"Karsh");
    Ptr->age = 20;
    Ptr->marks=49;
    printf("Student Details\n");
    printf("Name:%s\n",Ptr->name);
    printf("Age:%d\n",Ptr->age);
    printf("Marks:%d\n",Ptr->marks);
    return 0;
    
}