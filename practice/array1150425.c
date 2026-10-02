#include<stdio.h>
int main(){
    int arrr[5],num;
    printf("enter the elements:\t");
    scanf("%d",&num);
    for (int  i = 0; i < num; i++)
    {
        scanf("%d",&arrr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d ",arrr[i]);
    }
    
   
    
}