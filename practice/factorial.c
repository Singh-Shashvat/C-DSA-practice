#include<stdio.h>
long long int fuct(long long int n){
    long long int c = 1;
    for (int i = n; i >0; i--)
    {
        c=c*i;    
    }
return c;
}

int main(){
     
   long long int n,result;
    printf("Enter the number:\t");
    scanf("%lld",&n);
    result = fuct(n);
    printf("factorial : %lld",result);
 return 0;   
}