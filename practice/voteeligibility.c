#include<stdio.h>
int main(){
    int n;
    printf("Enter the age of the voter:\t");
    scanf("%d",&n);
    if (n>=18)
    {
        printf("teh voter is eligible to vote");
    }
    else{
        printf("the voter is not eligible to vote");
    }
    

}