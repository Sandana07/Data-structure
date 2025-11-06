#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
void insertbegin(int value)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}
void deletebegin()
{
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    struct node* temp=head;
    head=head->next;
    printf("Deleted node with value: %d\n", temp->data);
    free(temp);
}
void display()
{
    struct node* temp=head;
    if(temp==NULL){
        printf("List is empty");
        return;
    }
    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
int main()
{
    insertbegin(10);
    insertbegin(20);
    insertbegin(30);
    insertbegin(40);
    printf("\nLinked list elements….\n");
    display();
    printf("\n\nDeleting first node\.....n");
    deletebegin();
    display();
    printf("\n\nDeleting first node again…..\n");
    deletebegin();
    display();
}


