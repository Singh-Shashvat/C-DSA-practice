#include<stdio.h>
int main(){
    int a;
    printf("Enter the number:\t");
    scanf("%d",&a);
    
    
        if (a%2==0 || a%3==0 || a%5==0 || a%7==0 )
        {
           
            printf("the  number %d is not a prime number",a);
        }
        else{
            printf("the number %d is prime number",a);
        }
     return 0;
}