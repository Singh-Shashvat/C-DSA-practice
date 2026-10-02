#include<stdio.h>
#include<stdlib.h>
struct Borrower
{
    char Name[50];
    int date;
};

struct Book
{
    int id;
    char title[50];
    struct Borrower *borrower;
};

int main(){
    struct Book *book = (struct Book *) malloc(sizeof(struct Book));
    book->borrower = (struct Borrower *) malloc(sizeof( struct Borrower));
      
    printf("Enter the book id:\t");
    scanf("%d",&book->id);
    printf("Enter the book title:\t");
    scanf("%s",book->title);
    printf("Enter borrower name:\t");
    scanf("%s",book->borrower->Name);
    printf("Enter return Date:\t");
    scanf("%d",&book->borrower->date);


    printf("\nBook Details:\n");
    printf("ID: %d\n", book->id);
    printf("Title: %s\n", book->title);
    printf("Borrower: %s\n", book->borrower->Name);
    printf("Return in: %d days\n", book->borrower->date);


    free(book->borrower);
    free(book);
}