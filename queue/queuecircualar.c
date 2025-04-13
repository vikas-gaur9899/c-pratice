#include <stdio.h>
#define maxsize 5
int queue[maxsize];
int front = -1;
int rear = -1;

void enqueue(){
    if((rear == maxsize - 1 && front == 0) || (front == (rear+1))){
        printf("Queue is full\n");
    

    }
    else{
        int item;
        printf("enter your data\n");
        scanf("%d",&item);
        if(front == -1){
            front = 0;
            rear = 0;
            queue[rear] = item;
        }
        else if( rear == maxsize -1 && front != 0){
            rear = 0;
            queue[rear] = item;

        }
        else{
            rear = rear + 1;
            queue[rear] = item;
        }
    }
}
void dequeue(){
    if(front == -1){
      printf("queeue is empty\n");
}
else if (rear == front){
    front = -1;
    rear = -1;
    
}
else if(front == maxsize -1 && rear != -1) {
    printf("dequeued item is %d\n", queue[front]);
    front = 0;
}
else{
    printf("dequeued item is %d\n", queue[front]);
    front = front + 1;
}
}
void display(){
    if(front == -1){
        printf("Queue is empty\n"); 

    }
    else{
        int i ;
        
        printf("Queue elements are ");
        if(rear >= front){
            for( i = front; i <= rear; i++){
                printf("%d ", queue[i]);
            }
        }
        else{
            for(i = front; i < maxsize; i++){
                printf("%d ", queue[i]);
            }
            for(i = 0; i <= rear; i++){
                printf("%d ", queue[i]);
            }
        }
        printf("\n");
    }
}
int main() {
    int choice;
    while (1) {
        printf("\nChoose an operation:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
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
                printf("Exit program \n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}