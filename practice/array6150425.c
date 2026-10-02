#include<stdio.h>
int main(){
    int num,even=0,odd=0;
    printf("enter the elements:\t");
    scanf("%d",&num);
    int arrr[num];
    for (int  i = 0; i < num; i++)
    {
        scanf("%d",&arrr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if (arrr[i]==0)
        {
            printf("number is nither even nor odd") ; 
        }else if (arrr[i]%2==0)
        {
            even =even + 1;
        }else{
            odd= odd + 1;
        }
        
        
    }
    
    printf("even=%d , odd=%d", even, odd);
    
}