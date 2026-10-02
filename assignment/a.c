#include<stdio.h>
int main(){
    int *ptr, *new, ctr=0;
    new=(int*)malloc(3 * sizeof(int));
    if(new==NULL){
        printf("\n no space");
        exit(1);
    }
    printf("\n input three integers:");
    for (ptr  = new; ptr< new + 3; ptr++)
    {
        scanf("%d",ptr);
        
    }
    printf("\n VALUE \t ADDRESS");
    for (ptr  = new; ptr< new + 3; ptr++)
    {
        printf("\n %d \t %u",*ptr,ptr);
    }
    return 0;
}