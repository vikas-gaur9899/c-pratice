#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;

} node;
node *temp;
node  *head;







node *createnode(){
    node *newnode;
    newnode = (node*)malloc(sizeof(node));
    printf("enter data /n");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    return newnode;

}
void insertAtBeginning(node **head)
 { 
    node *newnode ;
    newnode = (node *)malloc(sizeof(node));
    printf("enter data /n");
    scanf("%d", &newnode->data);
    if(head == NULL){
        newnode->next = NULL;
        *head = newnode;
    
    }else{
        newnode->next = *head;
        *head = newnode;
    }

    


    

 }


void  insertAtMiddle(node **head ){
    

    if(*head == NULL){
        insertAtBeginning(head);
    }
    else{
        int position ;
    temp = *head;
    node *prev;

    printf("enter position /n");
    scanf("%d", &position);
        node *newnode = (node *)malloc(sizeof(node));
        printf("enter data /n");
        scanf("%d", &newnode->data);
        int i =1;

        while(i<position) {
            prev = temp;
            temp = temp->next;
            i++;}
            prev->next = newnode;
            newnode->next = temp;
    
            
        
    }
   
    
    

}
 
 
 void insertAtEnd(node **head){
    temp = *head;
    if(head == NULL){
        insertAtBeginning(head);
        
    }else{
        node *newnode = (node *)malloc(sizeof(node));
        printf("enter your data\n");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;

    }

    


 
 }
 void deleteAtBeginning(node **head){
    temp = *head;

    if(*head == NULL){
        printf("List is empty\n");
    }
    else {
        *head = temp->next;
        
    
        printf("you deleted the node %d\n", temp->data);
        free(temp);

    }

    printf("deleteAtBeginning \n");
 }
 void deleteAtMiddle(node **head){
    temp = *head;
    node *prev;
    if(*head == NULL){
        printf("List is empty\n");
        
    }else{
    int position;
    printf("enter position of node which you want to delete\n");
    scanf("%d", &position);
    int i=1;
    while(i<position){
        prev = temp;
        temp = temp->next;
        i++;
    }
    prev->next = temp->next;
    printf("you deleted the node %d\n", temp->data);
    free(temp);

 }}
 void deleteAtEnd(node **head){
    node *prev;
    temp = *head;
    if(*head == NULL){
        printf("List is empty\n");
        
    }
    else {
        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        printf("you deleted the node %d\n", temp->data);
        free(temp);


    }
    printf("deleteAtEnd \n");
 }
 void display(node **head){
    temp = *head;
    if(*head == NULL){
        printf("List is empty\n");
        
    }
    else{
        printf("List elements are: ");
        while(temp!= NULL){
            printf("%d \n", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
 }

int main(){
    head = NULL;
    temp = head;

    int choice;
    while(1){
    printf("hello! choose any option\n");
    printf("1. insertion at middle\n");
    printf("2.insertion at beginning\n");
    printf("3. insertion at end\n");
    printf("4. deletion at beginning\n");
    printf("5. deletion at middle\n");
    printf("6. deletion at end\n");
    printf("7. display\n");
    printf("8. exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            insertAtMiddle(&head);
            break;
        case 2:
            insertAtBeginning(&head);
            break;
        case 3:
            insertAtEnd(&head);
            break;
        case 4:
            deleteAtBeginning(&head);
            break;
        case 5:
            deleteAtMiddle(&head);
            break;
        case 6:
            deleteAtEnd(&head);
            break;
        case 7:
            display(&head);
            break;
        case 8:
            printf("thanks \n");
            return 0;
        default:
            printf("Invalid choice\n");
    }
    }

return 0;

}

