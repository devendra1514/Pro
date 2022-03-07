#include <stdio.h>
#include <stdlib.h>
void show();
typedef struct Node{
    struct Node* prev;
    int id;
    struct Node* next;
}Node;

Node* head = NULL;

void insert() {
    Node* temp;
    temp = (Node*)malloc(sizeof(Node));
    printf("\nEnter Book ID : ");
    scanf("%d",&temp->id);
    temp->prev = temp->next = NULL;
    if(head == NULL) {
        head = temp;
    }
    else {
        Node* ptr;
        ptr = head;
        while(ptr != NULL) {
            if(ptr->id == temp->id) {
                printf("\nBook ID is already available");
                break;
            }
            else if(ptr->next == NULL) {
                ptr->next = temp;
                temp->prev = ptr;
                break;
            }
            ptr = ptr->next;
        }
    }
}

void delete() {
    if(head == NULL) {
        printf("\nBook ID is empty !!!!!");
    }
    else {
        int data;
        show();
        printf("\n\nEnter Book ID you want to delete : ");
        scanf("%d",&data);
        Node* ptr, *pre_ptr;
        ptr = head;
        pre_ptr = ptr;
        while(ptr != NULL) {
            if(ptr->id == data) {
                if(head->id == data) {
                    head = head->next;
                    head->prev = NULL;
                    free(ptr);
                    break;
                }
                else if(ptr->next == NULL) {
                    pre_ptr->next = NULL;
                    break;
                }
                else {
                    ptr->next->prev = pre_ptr;
                    pre_ptr->next = ptr->next;
                    break;
                }
            }
            else if(ptr->next == NULL) {
                printf("\nBook ID not available for delete !!!!!");
                break;
            }
            pre_ptr = ptr;
            ptr = ptr->next;
        }
    }
}

void count() {
    if(head == NULL) {
        printf("\nBook ID list is empty !!!!!");
    }
    else {
        Node* ptr;
        ptr = head;
        int count = 0;
        for(int i = 1; ptr != NULL; i++) {
            count = i;
            ptr = ptr->next;
        }
        printf("\nTotal Book ID : %d",count);
    }
}

void search() {
    if(head == NULL) {
        printf("\nBook ID list is empty !!!!!");
    }
    else {
        Node* ptr;
        ptr = head;
        int data;
        printf("\nEnter Book ID : ");
        scanf("%d",&data);
        for(int i = 1; ptr != NULL; i++) {
            if(ptr->id == data) {
                printf("Book ID is available in list at location %d",i);
                break;
            }
            else if(ptr->next == NULL) {
                printf("\nBook ID is not available !!!!!");
            }
            ptr = ptr->next;
        }
    }
}

void show() {
    if(head == NULL) {
        printf("\nBook ID list is empty");
    }
    else {
        Node* ptr;
        ptr = head;
            printf("\nBook ID list is ");
            printf("\n__________");
        for(int i = 1 ; ptr != NULL ; i++) {
            printf("\n|%d.  %d", i, ptr->id);
            ptr = ptr->next;
        }
    }
}

int main() {
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
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                count();
                break;
            case 4:
                search();
                break;
            case 5:
                show();
                break;
            case 6:
                exit(1);
        }
    }while(choice >=1 && choice <=6);
    return 0;
}