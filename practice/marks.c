#include<stdio.h>
int main(){
    int n;
    printf("enter the numbers:\t");
    scanf("%d",&n);
    if (90<=n<=100)
    {
        printf("GRADE : A");
    }
     if (80<=n<=89)
    {
        printf("GRADE : B");
    }
    else if (70<=n<=79)
    {
        printf("GRADE : C");
    }
    else if (60<=n<=69)
    {
        printf("GRADE : D");
    }
    else{
        printf("GRADE : F");
    }
       
    return 0;
}