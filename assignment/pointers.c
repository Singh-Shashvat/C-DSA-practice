#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Country {
    char name[50];
    char code[10];
};

struct Address {
    char street[100];
    char city[50];
    struct Country *country;
};

struct Student {
    int roll;
    char name[50];
    struct Address *address;
};

void main() {
    struct Country *country = (struct Country*)malloc(sizeof(struct Country));
    struct Address *address = (struct Address*)malloc(sizeof(struct Address));
    struct Student *student = (struct Student*)malloc(sizeof(struct Student));
    
    printf("Enter student roll: ");
    scanf("%d", &student->roll);
    printf("Enter student name: ");
    scanf("%s", student->name);
    printf("Enter street: ");
    scanf("%s", address->street);
    printf("Enter city: ");
    scanf("%s", address->city);
    printf("Enter country name: ");
    scanf("%s", country->name);
    printf("Enter country code: ");
    scanf("%s", country->code);
    
    address->country = country;
    student->address = address;
    
    printf("\nStudent Details:\n");
    printf("Roll: %d\nName: %s\nStreet: %s\nCity: %s\nCountry: %s\n", 
            student->roll, student->name, student->address->street, 
            student->address->city, student->address->country->code);
    
    free(student);
    free(address);
    free(country);
}