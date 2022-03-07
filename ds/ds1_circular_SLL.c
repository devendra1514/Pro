#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;

// Node* head = NULL;

void insertion(Node** head) {
    Node* temp;
    temp = (Node*)malloc(sizeof(Node));
    printf("\nEnter Element : ");
    scanf("%d",&temp->data);
    temp->next = NULL;
    if(*head == NULL) {
        *head = temp;
        (*head)->next = *head;
    }
    else {
        Node* ptr = *head;
        do {
            if(ptr->data == temp->data) {
                printf("\nData is already available !!!!!\n");
                break;
            }
            else if(ptr->next == *head) {
                ptr->next = temp;
                temp->next = *head;
                break;
            }
            ptr = ptr->next;
        }while(ptr != *head);
    }
}



void show(Node* head) {
    if(head == NULL) {
        printf("\nNo data avialable !!!!!\n");
    }
    else {
        Node* ptr = head;
        int count = 1;
        printf("\nElement : \n");
        do {
            printf("%d. %d\n", count, ptr->data);
            count++;
            ptr = ptr->next;
        } while (ptr != head);
    }
}

int main() {
    Node* head = NULL;
    int choice;
    do {
        printf("\n_______________________");
        printf("\n|1. Insert Book ID    |");
        printf("\n|2. Delete Book ID    |");
        printf("\n|3. Count Book ID     |");
        printf("\n|4. Search Book ID    |");
        printf("\n|5. Show Book ID      |");
        printf("\n|6. Exit              |");
        printf("\n-----------------------");
        printf("\n>>>Enter Your Choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insertion(&head);
                break;
            // case 2:
            //     deletion();
            //     break;
            // case 3:
            //     count();
            //     break;
            // case 4:
            //     search();
            //     break;
            case 5:
                show(head);
                break;
            case 6:
                exit(1);
            default:
                printf("\nWrong Input !!!!!\n");
                break;
        }
    }while(choice >=1 && choice <=6);
    return 0;
}