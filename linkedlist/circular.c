#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node ;
node *head;
head = NULL;
node *createnode(){
    
    
    node *newnode = (node *)malloc(sizeof( node));
    printf("enter your data");
    scanf("%d" , &newnode->data);
   return newnode;

}
void insertatbeginnig(node **head){
     if(*head == NULL){
        node *newnode = createnode();
        *head = newnode;
        newnode->next = newnode;

        
     }else{
        node *newnode = createnode();
        
     }


}

