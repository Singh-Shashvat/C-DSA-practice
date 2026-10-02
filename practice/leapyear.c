#include<stdio.h>
int main(){
    int n;
    printf("Enter the year:\t");
    scanf("%d",&n);
    if (n%4==0 && n%100!=0||n%400==0)
    {
        printf("the year %d is a leap year",n);
    } else{
        printf("the year%d is not a leap year",n);
    }
    return 0;
}
    