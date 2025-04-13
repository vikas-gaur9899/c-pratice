#include <stdio.h>
#include <stdlib.h>
typedef struct node{
int data;
    struct node *next;

}node;
node *top , *temp;
node *createnode(){
    node *newnode = (node *)malloc(sizeof(node));
    printf("enter data you want to push in stack \n");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    return newnode;

}
void push(node **top){
    if(*top == NULL){
        *top = createnode();
    }
    else{
        node *newnode = createnode();
        newnode->next = *top;
        *top = newnode;
    }

}
void pop(node **top){
    if(*top == NULL){
        printf(" hey!Stack is empty \n");

    }
    else{
        temp  = *top;
        *top = temp->next;
        printf("popped item is %d \n",temp->data);
        free(temp);
    }
}
void peek(node **top){
    if(*top == NULL){
        printf("hey! Stack is empty \n");
    }else{
        printf("Top item is %d \n",(*top)->data);
    }
}
void display(node **top){
    if(*top == NULL){
        printf("hey! Stack is empty \n");
    }else{
        temp = *top;
        while(temp!=NULL){
            printf("%d  \n",temp->data);
            temp = temp->next;
        }
    }
}
int main(){
    top = NULL;
    int choice;
    while(1){
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. peek\n");
        printf("4. display\n");
        printf("5. exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push(&top);
                break;
            case 2:
                pop(&top);
                break;
            case 3:
                peek(&top);
                break;
            case 4:
                display(&top);
                break;
            case 5:
                printf("thanks");
                return 0;
            default:
                printf("Invalid choice \n");
        }
    }
    return 0;
 
}