#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee {
    char Name[50];
    int age;
    char address[50];
    int basic_pay;
    int HRA;
    int DA;
    int PF;
    int tax;
};

int main() {
    struct Employee emp;
    printf("enter the details:");
    printf("Enter the Name:\t");
    scanf("%s",emp.Name);
    printf("enter teh age:");
    scanf("%d",&emp.age);
    printf("Enter the Address:\t");
    scanf("%s",emp.address);
    printf("Enter the basic pay:\t");
    scanf(" %d",&emp.basic_pay);

    if (emp.basic_pay<5000)
    {
        emp.HRA = emp.basic_pay/10;
        emp.DA = emp.basic_pay *0.15;
        emp.PF = emp.basic_pay *0.03;
        emp.tax = emp.basic_pay * 0.01;
    }
    else if (emp.basic_pay>5000 && emp.basic_pay<10000)
    {
        emp.HRA = emp.basic_pay *0.30;
        emp.DA = emp.basic_pay *0.20;
        emp.PF = emp.basic_pay *0.05;
        emp.tax = emp.basic_pay * 0.02;
    }
    else{
        emp.HRA = emp.basic_pay * 0.40;
        emp.DA = emp.basic_pay *0.30;
        emp.PF = emp.basic_pay *0.10;
        emp.tax = emp.basic_pay * 0.04;
    }
    printf("Name:%s",emp.Name);
    printf("Age:%d",emp.age);
    printf("Address:%s",emp.address);
    printf("basic pay:%d",emp.basic_pay);
    printf("Salery =%d",emp.basic_pay + emp.DA + emp.HRA - emp.tax);
    printf("Allowences:%d",emp.DA + emp.HRA);
    printf("Deduction:%d",emp.tax);

    return 0;
}
