#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
int main()
{
    head=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->next=NULL;
    
    printf("Node data = %d",head->data);
}
