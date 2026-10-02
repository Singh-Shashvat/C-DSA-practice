#include<stdio.h>
#include<stdlib.h>

struct Book {
    char title[50];
    int price;
    int page;
};

struct Bookowner {
    char ownername[50];
    int ownerage;
};

int main() {
    struct Book *book = (struct Book *)calloc(2, sizeof(struct Book));
    struct Bookowner *owner = (struct Bookowner *)calloc(2, sizeof(struct Bookowner));
    
    struct Book *bookStart = book; 
    struct Bookowner *ownerStart = owner; 

    for (int i = 0; i < 2; i++) {
        printf("Enter the book title:\t");
        scanf("%s", book->title);
        printf("Enter the price of book:\t");
        scanf("%d", &book->price);
        printf("Enter the number of pages:\t");
        scanf("%d", &book->page);

        printf("Enter owner name:\t");
        scanf("%s", owner->ownername);
        printf("Enter owner age:\t");
        scanf("%d", &owner->ownerage);

        book++;
        owner++;
    }

    printf("\nBook Details:\n");
    book = bookStart; 
    owner = ownerStart; 

    for (int i = 0; i < 2; i++) {
        printf("\nTitle: %s\n", book->title);
        printf("Price: %d\n", book->price);
        printf("Pages: %d\n", book->page);
        printf("Owner Name: %s\n", owner->ownername);
        printf("Owner Age: %d\n", owner->ownerage);

        book++;
        owner++;
    }

    free(bookStart);
    free(ownerStart);

    return 0;
}
