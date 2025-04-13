#include <stdio.h>
#define maxsize 5
int stack[maxsize];
int top = -1;
void push(){
    if (top == maxsize -1){
        printf("Stack Overflow\n");
    
    }
    else {
        int x;
        printf("Enter the element");
        scanf("%d", &x);

        if(top == -1){
            
            top = 0;
            stack[top] = x;
            
        }
        else{
            top++;
            stack[top] = x;

        }
    }
}
 void pop(){
    if(top == -1){
    printf("stack is underflow \n");}
    else{
        printf("poped element is %d \n",stack[top]);
        top--;


    }
 }
 void peek(){
    if(top == -1){
        printf("Stack is empty \n");
    }
    else{
        printf("Top element is %d \n", stack[top]);
    }
 }
 void display(){
    if(top == -1){
        printf("Stack is empty \n");
    }
    else{
        printf("Stack elements are: \n");
        for(int i=top; i>=0; i--){
            printf("%d \n", stack[i]);
        }
    }
 }
int main()
{
    int choice;
    while(1){
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. peek\n");
        printf("4. display\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("thanks");
                return 0;
            default:
                printf("Invalid choice \n");}}
return 0;

}
