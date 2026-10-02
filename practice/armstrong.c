#include <stdio.h>
int main()
{
    int n,a,c=0;
    printf("enter the number :\t");
    scanf("%d", &n);
int x=n;
    while (n>0)
    {
        a= n%10;
        
        c= a*a*a +c;
        n=n/10;
    }
    printf("%d\n",c);
    
    if (x==c)
    {
        printf("the given number is an armstrong number");
    }
    else{
        printf("the number is not an armstrong number");
    }
    return 0;
}