#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Book
{
    char title[50];
    int pages;
    float price;   
};

int main(){
    struct Book *book = (struct Book *) malloc(sizeof(struct Book));
    snprintf(book->title, 50, "Programming in C");
    book->pages = 350;
    book->price = 499.99;
    
    printf("\nBook Details:\n");
    printf("Title: %s\n", book->title);
    printf("No of pages: %d\n", book->pages);
    printf("Price of book: %f\n", book->price);

    free(book);
}