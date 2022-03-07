#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    int data;
    struct Stack *next;
}Stack;

int isFull(Stack* head) {
    Stack* n = (Stack*)malloc(sizeof(Stack));
    if(n == NULL) {
        return 1;
    }
    else {
        return 0;
    }
}

int isEmpty(Stack* head) {
    if(head == NULL) {
        return 1;
    }
    else {
        return 0;
    }
}

void push(Stack** head) {
    Stack* temp = (Stack*)malloc(sizeof(Stack));
    printf("\nEnter Data : ");
    scanf("%d",&temp->data);
    temp->next = NULL;
    if(isFull(*head)) {
        printf("\nOverflow\n");
    }
    else {
        temp->next = *head;
        *head = temp;
    }
}

int pop(Stack** head) {
    if(isEmpty(*head)) {
        printf("\nUnderflow !!!!!\n");
    }
    else {
        Stack* temp = *head;
        printf("\nElement is : %d\n",(*head)->data);
        (*head) = (*head)->next;
        free(temp);
    }
}

int peek(Stack* head) {
    if(isEmpty(head)) {
        printf("\nUnderflow !!!!!\n");
    }
    else {
        printf("\nElement is : %d\n",head->data);
    }
}

int main() {
    Stack *head = NULL;
    int choice;
    do{
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Exit");
        printf("\nEnter Your choice : ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                push(&head);
                break;
            case 2:
                pop(&head);
                break;
            case 3:
                peek(head);
                break;
            case 4:
                exit(1);
            default:
                printf("\nWrong Choice !!!!!\n");
        }
    }while(choice >= 1 && choice <= 4);
    return 0;
}