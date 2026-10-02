#include<stdio.h>
int main(){
    int n,a,c=0,x;
    printf("Enter the number:\t");
    scanf("%d",&n);
    x=n;
    while (n>0)
    {
        a= n%10;
        
        c= (c*10) +a;
        n=n/10;
    }
    
    if (x==c)
    {
        printf("the number %d is a palindrome number",x);
    }
    else{
        printf("The number %d is not a palindrome number",x);
    }
    return 0;

}