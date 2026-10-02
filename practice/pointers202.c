#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
    int id;
    char name[50];
    float price;
};

int main() {
    struct Product *item = (struct Product *)malloc(sizeof(struct Product));
    
    if (item == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter product ID: ");
    scanf("%d", &item->id);

    printf("Enter product name: ");
    scanf("%s", item->name);

    printf("Enter product price: ");
    scanf("%f", &item->price);

    printf("\nProduct Details:\n");
    printf("ID: %d\n", item->id);
    printf("Name: %s\n", item->name);
    printf("Price: %.2f\n", item->price);

    free(item);
    return 0;
}