#include <stdio.h>

int factorial(int n) {
    return (n == 0) ? 1 : n * factorial(n - 1);
}

int fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int num;
    printf("enter th number :\n");
    scanf("%d",&num);
    printf("Factorial of %d is %d\n", num, factorial(num));
    printf("Fibonacci series: ");
    for (int i = 0; i < num; i++)
      {  printf("%d ", fibonacci(i));}
    int x,y;
    printf("\nenter the numbers for GCD:\n");
    scanf("%d\t%d",&x,&y);
    printf("\nGCD of %d and %d: %d\n",x,y, gcd(x, y));
    return 0;
    
}
