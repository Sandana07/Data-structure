#include<stdio.h>
#define size 10
int stack[size];
int top = -1;
void push(int value){
    if(top == size-1){
        printf("Stack is full");
    }
    else{
        stack[++top]=value;
        printf("%d pushed\n",value);
    }
}
void pop(){
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("%d poped\n",stack[top]);
           for(int i=top+1;i<=top;i++)
             stack[i-1]=stack[i];
        top--;

    }
}
void peek(){
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("Top element: %d\n",stack[top]);
}
}
void display() {
    if(top == -1) {
        printf("Stack is empty\n");
    }
    else {
       printf("Stack (top -> bottom): ");
       for(int i=top; i>=0; i--) {
           printf("%d ", stack[i]);
       }
       printf("\n");
       
}
}
int main(){
    push(1);
    push(2);
    push(3);
    display();
    pop();
    pop();
    pop();
    display();
    push(9);
    push(8);
    peek();
    display();
}
