#include <stdio.h>
#define SIZE 5

int stack[SIZE], top = -1;

void push(int value) {
    if (top == SIZE - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = value;
}

void pop() {
    if (top == -1)
        printf("Stack Underflow\n");
    else
        printf("Popped: %d\n", stack[top--]);
}

void isEmpty() {
    if (top == -1)
        printf("Stack is empty\n");
    else
        printf("Stack is not empty\n");
}

int main() {
    push(10);
    push(20);
    pop();
    isEmpty();
    return 0;
}
