#include<stdio.h>
int main(){
    int num,min;
    printf("enter the elements:\t");
    scanf("%d",&num);
    int arrr[num];
    for (int  i = 0; i < num; i++)
    {
        scanf("%d",&arrr[i]);
    }
    min=arrr[0];
    for (int i = 1; i < num; i++)
    {
        if (min<=arrr[i])
        {
        continue;
        }else{
            min=arrr[i];
        }
        
    }
    printf("%d",min);
    
   
    
}