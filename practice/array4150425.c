#include<stdio.h>
int main(){
    int num,max;
    printf("enter the elements:\t");
    scanf("%d",&num);
    int arrr[num];
    for (int  i = 0; i < num; i++)
    {
        scanf("%d",&arrr[i]);
    }
    max=arrr[0];
    for (int i = 1; i < num; i++)
    {
        if (max>=arrr[i])
        {
        continue;
        }else{
            max=arrr[i];
        }
        
    }
    printf("%d",max);
    
   
    
}