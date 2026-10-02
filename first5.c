#include<stdio.h>
int main()
{ 
    char ch;
    printf("enter a character: \n");
    scanf("%c",&ch);
   if(ch>='a' && ch<='z' || ch>= 'A' && ch<= 'Z')
   {printf("the character is alphabet");}
   else 
   {printf("the character is not an alphabet");}
   
   return 0;
}
