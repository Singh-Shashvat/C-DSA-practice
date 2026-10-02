#include<stdio.h>
#include<string.h>
struct Date
{
    int day,month,year;
};
struct Person
{
    char Name[50];
    struct Date *birthdate;
};
int main(){
    struct Date date = {01,01,2000};
    struct Person person;
    person.birthdate=&date;
    strcpy(person.Name,"Sarah");
    printf("Person Details");
    printf("Name:%s\n",person.Name);
    printf("Birth Dtae:%d/%d/%d",person.birthdate->day,person.birthdate->month,person.birthdate->year);
}

