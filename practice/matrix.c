#include<stdio.h>
int main(){
    int n,m;
    printf("enter the size of matrix:");
    scanf("%d\t%d",&n,&m);
    int arr[n][m];
    printf("enter the elements of matrix :");
    for ( int i = 0; i < n; i++)
    {
        for (int j  = 0; j < m; j++)
        {
         scanf("%d",&arr[i][j]);
        }
        
    }
    for ( int i = 0; i < n; i++)
    {
        for (int j  = 0; j < m; j++)
        {
         printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

 return 0;   
}