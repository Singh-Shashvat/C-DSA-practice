#include<stdio.h>
int main(){
    int n;
    printf("Enter the year:\t");
    scanf("%d",&n);
    if (n%4==0 )
    {if(n%100!=0){
        printf("the year %d is a leap year",n);}
        
    } else{if (n%400==0)
    {
        printf("the year%d is a leap year",n);
    }
    else{
        printf("The year %d is not a leap year",n);
    }
    }
    return 0;
}
    