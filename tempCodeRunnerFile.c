nt main(){
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