#include <stdio.h>
struct employee {
    char name[100];
    int age;
    char addr[200];
    float basic_pay, HRA, DA, allowances, PF, income_tax, deduction, salary;
};
void calculateSalary(struct employee *emp) {
    float hra_percent, da_percent, pf_percent, tax_percent;
    if (emp->basic_pay < 5000) {
        hra_percent = 0.10;
        da_percent = 0.15;
        pf_percent = 0.03;
        tax_percent = 0.01;
    } else if (emp->basic_pay >= 5000 && emp->basic_pay <= 10000) {
        hra_percent = 0.30;
        da_percent = 0.20;
        pf_percent = 0.05;
        tax_percent = 0.02;
    } else {
        hra_percent = 0.40;
        da_percent = 0.30;
        pf_percent = 0.10;
        tax_percent = 0.04;
    }
    emp->HRA = hra_percent * emp->basic_pay;
    emp->DA = da_percent * emp->basic_pay;
    emp->allowances = 0.10 * emp->basic_pay;
    emp->PF = pf_percent * emp->basic_pay;

    float gross_salary = emp->basic_pay + emp->HRA + emp->DA + emp->allowances;
    emp->income_tax = tax_percent * gross_salary;
    emp->deduction = emp->PF + emp->income_tax;
    emp->salary = emp->basic_pay + emp->allowances - emp->deduction;
}
int main() {
    struct employee emp;
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee age: ");
    scanf("%d", &emp.age);
    printf("Enter employee address: ");
    scanf(" %[^\n]s", emp.addr);
    printf("Enter basic pay: ");
    scanf("%f", &emp.basic_pay);
    calculateSalary(&emp);
    printf("\n\n\n");
    printf("\nName of Employee: %s", emp.name);
    printf("\nAge of Employee: %d", emp.age);
    printf("\nAddress of Employee: %s", emp.addr);
    printf("\nBasic Pay: %10.2f", emp.basic_pay);
    printf("\nAllowances %10.2f", emp.allowances);
    printf("\nDeduction %10.2f", emp.deduction);
    printf("\nSalary %10.2f", emp.salary);
    return 0;
}