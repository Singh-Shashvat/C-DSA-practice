#include<stdio.h>

unsigned long int fuct(unsigned long int n) {
   unsigned long long int c = 1;
    for (unsigned long int i = n; i > 0; i--) {
        c = c * i;
    }
    return c;
}

int main() {
    unsigned long int n;
    printf("Enter the number:\t");
    scanf("%lld", &n);

    unsigned long int result = fuct(n);
    printf("Factorial: %lld\n", result);
    return 0;
}
