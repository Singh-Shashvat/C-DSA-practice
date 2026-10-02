#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:\t");
    scanf("%d",&n);
    int FIBO[n];
    printf("Enter the first two numbers:\n");
    scanf("%d\t%d",&FIBO[0],&FIBO[1]);
    for (int i= 2;i <= n;i++)
    {
        FIBO[i]=FIBO[i-2] + FIBO[i-1];
    }
    for (int i= 0;i <= n;i++)
    {
        printf("%d\t",FIBO[i]);
    }
return 0;
}    