#include<stdio.h>
#include<stdlib.h>
struct  Node
{
    int data;
    struct Node *next;
};
void insertatbegining(struct Node **head,int value){
    struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = *head;
    *head=newnode;
};
void printlist(struct Node *head){
    struct Node *temp = head;
    while (temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
};
int main(){
    struct Node *head = NULL;
    insertatbegining(&head,10);
    insertatbegining(&head,8);
    insertatbegining(&head,6);
    insertatbegining(&head,4);
    insertatbegining(&head,2);
    printlist(head);
    return 0;
}
