#include<stdio.h>
int main(){
    int temp, mode;
    printf("Enter the temp:\t");
    scanf("%d",&temp);
    printf("Enter the mode:\t");
    scanf("%d",&mode);
    if (mode==0 && temp<40 )
    {
        printf("the temperature is in normal condition ");}
        
     else{if (mode == 1)
     { if (5<temp<10 || 35<temp<38)
     {
        printf("the temperature is critical ");
     }
    
     else{
        printf("The temperature is in emergency state");
     }
     }
     return 0;
}
}