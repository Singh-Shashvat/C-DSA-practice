#include<stdio.h>
int main(){
    int arrr[5],num,sum=0;
    float avg;
    printf("enter the elements:\t");
    scanf("%d",&num);
    for (int  i = 0; i < num; i++)
    {
        scanf("%d",&arrr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        sum = sum +arrr[i];
    }
avg=sum/num;
printf("%.2f",avg);
     
}