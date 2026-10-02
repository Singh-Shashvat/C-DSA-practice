#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the Author structure
struct Author {
    char name[100];
    int age;
};

struct Book {
    char title[100];
    double price;
    struct Author* author;
};

int main() {
    
    struct Book* book = (struct Book*)malloc(sizeof(struct Book));
    book->author = (struct Author*)malloc(sizeof(struct Author));

    
    printf("Enter the book's title: ");
    fgets(book->title, sizeof(book->title), stdin);
    book->title[strcspn(book->title, "\n")] = '\0'; 

    printf("Enter the book's price: ");
    scanf("%lf", &book->price);
    getchar(); 

    printf("Enter the author's name: ");
    fgets(book->author->name, sizeof(book->author->name), stdin);
    book->author->name[strcspn(book->author->name, "\n")] = '\0'; 

    printf("Enter the author's age: ");
    scanf("%d", &book->author->age);

    
    printf("\nBook Details:\n");
    printf("Title: %s\n", book->title);
    printf("Price: %.2lf\n", book->price);
    printf("Author Name: %s\n", book->author->name);
    printf("Author Age: %d\n", book->author->age);

    
    free(book->author);
    free(book);

    return 0;
}
