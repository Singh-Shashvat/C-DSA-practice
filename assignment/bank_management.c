#include <stdio.h>

struct Account {
    char name[50];
    int accountNumber;
    float balance;
};

void createAccount(struct Account *acc) {
    printf("Enter Account Holder Name: ");
    scanf("%s", acc->name);
    printf("Enter Account Number: ");
    scanf("%d", &acc->accountNumber);
    acc->balance = 0.0;
    printf("Account created successfully!\n");
}

void deposit(struct Account *acc) {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    if (amount > 0) {
        acc->balance += amount;
        printf("Deposited successfully! New Balance: %.2f\n", acc->balance);
    } else {
        printf("Invalid amount!\n");
    }
}

void withdraw(struct Account *acc) {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    if (amount > 0 && amount <= acc->balance) {
        acc->balance -= amount;
        printf("Withdrawn successfully! New Balance: %.2f\n", acc->balance);
    } else {
        printf("Invalid or insufficient funds!\n");
    }
}

void checkBalance(struct Account *acc) {
    printf("Current Balance: %.2f\n", acc->balance);
}

int main() {
    struct Account acc;
    int choice;
    createAccount(&acc);
    
    do {
        printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: deposit(&acc); break;
            case 2: withdraw(&acc); break;
            case 3: checkBalance(&acc); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}
