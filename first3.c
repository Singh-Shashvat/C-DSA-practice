#include<stdio.h>
int main()
{ 
    int a;
    printf("enter the  number\n");
    scanf("%d",&a);
    if (a>0)
    {printf("the number is positive");}
    else if (a==0)
    { printf("the number is neather positive nor negative ");}
    else
    { printf(" the number is negative");}
   return 0;
}
