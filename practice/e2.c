#include<stdio.h>
int main(){
    int n,s;
    printf("Enter the Salery:\t");
    scanf("%d",&n);
    if (n<=10000)
    {
        printf("no tax ");

    }
    else if (10000<n<=100000)
    {s=n/10;
        printf("tax deducted:%d",s);
        printf("salery: %d", n - s);
    } else{
        s=(n/100) * 25;
        printf("tax deducted:",s);
        printf("salery: %d", n - s);
    }
    
    
    return 0;
}