#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    struct Student *left, *right;
};

struct Student* createNode(int roll, char name[]) {
    struct Student *newNode = (struct Student*)malloc(sizeof(struct Student));
    newNode->roll = roll;
    strcpy(newNode->name, name);
    newNode->left = newNode->right = NULL;
    return newNode;
}

void printTree(struct Student *root) {
    if (root) {
        printf("Roll: %d, Name: %s\n", root->roll, root->name);
        printTree(root->left);
        printTree(root->right);
    }
}

int main() {
    struct Student *root = createNode(1, "Alice");
    root->left = createNode(2, "Bob");
    root->right = createNode(3, "Charlie");

    printf("Student Tree:\n");
    printTree(root);
    
    return 0;
}
