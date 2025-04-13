#include <stdio.h>
#include <stdlib.h>

typedef struct node {
   struct node *prev;
    int data;
    struct node *next;

} node;
node *head , *temp ;


node  *createnode(){
    node *newnode = (node *)malloc(sizeof(node));
    printf("Enter data   \n ");
    scanf("%d",&newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    return newnode;
}
// first function insert at begining
void insertatbegining(node **head){
    
    node *newnode = createnode();
    if(*head == NULL){
        *head = newnode;}
        else{
            newnode->next = *head;
            (*head)->prev = newnode;
            *head = newnode;

        }

    

}
void insertatend(node **head){
    temp = *head;
    if (*head == NULL) {
        insertatbegining(head);
        

    }else {
        node *newnode = createnode();
        while(temp->next != NULL){
            temp = temp->next;

        }
        temp->next = newnode;
        newnode-> prev = temp;


    }
}
void insertatmiddle(node **head){
    if(*head == NULL){
        insertatbegining(head);
}
else{
    temp = *head;
    node *newnode = createnode();


    int position ;
    int i =1;
    printf("enter position at which you want to insert /n");
    scanf("%d",&position);
    while(i <position){
        temp = temp->next;
        i++;
    }
    (temp->prev)->next = newnode;
    newnode->prev = temp->prev;
    newnode->next = temp;
    temp->prev = newnode;


    
    
}
}
void deleteatbegining(node **head){
    if(*head == NULL){
        printf("linked list is empty \n");
        
    }
    else{
        temp = *head;
        (temp->next)->prev = NULL;
        *head = temp->next;
        free(temp);

    }
}
void deleteatmiddle(node **head){
    temp = *head;
    if(*head == NULL){
        printf("linked list is empty \n");

}else{
    int position;
    node *prev;
    int i =1;
    printf("enter position at which you want to delete \n");
    scanf("%d",&position);
    while(i<position){
        prev = temp;
        temp = temp->next;
        i++;
    }
    prev->next = temp->next;
    (temp->next)->prev = temp->prev;
    printf("the deleted element is %d \n" ,temp->data);
    free(temp);



}
}
void deleteatend(node **head){
    if(*head == NULL) {
        printf("linked list is empty \n");
    }
    else{
        temp = *head;
        while(temp->next!= NULL){
            temp =temp->next;
        }
        (temp->prev)->next = NULL;
        printf("the deleted element is %d \n " ,temp->data);
        free(temp);
    }
}
void display(node **head){
    if(*head == NULL) {
        printf("linked list is empty \n");
    }
    else{
        temp = *head;
        while(temp != NULL){
            printf("%d  \n",temp->data);
            temp = temp->next;
        }

    }
}
void reversedisplay(node **head){
    if(head == NULL){
        printf("linked list is empty \n");
    }
    else{
        temp = *head;
        while(temp->next!= NULL){
            temp = temp->next;
        }
        while(temp != NULL){
        printf("%d \n ",temp->data);

            temp = temp->prev;
        }
    }
}
int main(){
    head = NULL;
    temp = head;

    int choice;
    while(1){
    printf("hello! choose any option\n");
    printf("1. insertion at beginnig\n");
    printf("2.insertion at middle\n");
    printf("3. insertion at end\n");
    printf("4. deletion at beginning\n");
    printf("5. deletion at middle\n");
    printf("6. deletion at end\n");
    printf("7. display\n");
    printf("8. reversed display\n");
    printf("9. exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            insertatbegining(&head);
            break;
        case 2:
            insertatmiddle(&head);
            break;
        case 3:
            insertatend(&head);
            break;
        case 4:
            deleteatbegining(&head);
            break;
        case 5:
            deleteatmiddle(&head);
            break;
        case 6:
          deleteatend(&head);
            break;
        case 7:
            display(&head);
            break;
        case 8:
        reversedisplay(&head);
        break;
        case 9:
            printf("thanks \n");
            return 0;
        default:
            printf("Invalid choice\n");
    }
    }

return 0;

}