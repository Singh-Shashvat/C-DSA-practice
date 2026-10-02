#include<stdio.h>
#include<stdlib.h>

struct Employee {
    char Name[50];
    int id;
    float Shifthours;
};



int main() {
    struct Employee *emp = (struct Employee *)calloc(3, sizeof(struct Employee));
    
    struct Employee *shifthours = emp; 
    

    for (int i = 0; i < 3; i++) {
        printf("Enter details of employee %d\n",i+1);
        printf("Enter the name of employee:\t");
        scanf("%s", emp->Name);
        printf("Enter the id of employee:\t");
        scanf("%d", &emp->id);
        printf("Enter the shifthours of employee:\t");
        scanf("%f", &emp->Shifthours);

       emp++;
    }

    printf("\nBook Details:\n");
    emp =shifthours;

    for (int i = 0; i < 3; i++) {
        printf("Details of employee");
        printf("\nName: %s\n", emp->Name);
        printf("ID: %d\n", emp->id);
        printf("Shifthours: %f\n", emp->Shifthours);
       

        emp++;
    }

    free(emp);
    

    return 0;
}
