#include<stdio.h>
int main(){
    int a = 10;
    void *voidPointer;
    voidPointer = &a;
    printf("%d", *(int *)voidPointer);
    return 0;
}