#include <stdio.h>
#define maxsize 5
int queue[maxsize];
int front = -1, rear = -1;
 void enqueue(){
    if(rear == maxsize - 1){
        printf("Queue is full \n");
        return;
    }
    else{
        int x;
        printf("Enter the element \n");
        scanf("%d", &x);
        if(front == -1){
            front = 0;
            rear = 0;
            queue[rear] = x;
        }
        else{
            rear++;
            queue[rear] = x;
        }
    }
 }
 void dequeue(){
    if (rear == -1){
        printf("Queue is empty \n");
    }
    else if (rear == front){
        printf("dequeue element is %d \n", queue[front]);
        front = -1;
        rear = -1;
    }
    else{
        printf("dequeue element is %d \n", queue[front]);
        front++;
    }
 }
 void display(){
    if(rear == -1){
        printf("Queue is empty \n");
    }
    else{
        printf("Queue elements are: \n");
        for(int i = front; i <= rear; i++){
            printf("%d ", queue[i]);
       }
        printf("\n");
    }
 }
 int main(){
     int choice;
    while(1){
        printf("1. enqueue\n");
        printf("2. dequeue\n");
        printf("3. display\n");
    printf("4. exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
            printf("thanks");
                return 0;
                
           
            default:
                printf("Invalid choice \n");}}
return 0;

}
 