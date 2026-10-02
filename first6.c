#include<stdio.h>
int main()
{ 
    char ch;
    printf("enter a character: \n");
    scanf("%c",&ch);
   if(ch>='a' && ch<='z' )
   {printf("the character is lowercase");}
   else if  (ch>= 'A' && ch<= 'Z')
   {printf("the character is uppercase");}
   else if ( ch>='0' && ch <='9')
   { printf("the character is number");}
   else 
   {printf ("the character is a special character");}
   
   return 0;
}
