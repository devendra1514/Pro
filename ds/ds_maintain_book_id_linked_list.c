#include <stdio.h>
#include <stdlib.h>
void show();

typedef struct Node {
    int book_id;
    struct Node *next;
}Node ;

Node *head = NULL;

void insertion() {
    Node* temp;
    temp = (Node*)malloc(sizeof(Node));
    printf("Enter Book ID : ");
    scanf("%d",&temp -> book_id);
    temp -> next = NULL;
    if(head == NULL) {
        head = temp;
    }
    else {
        Node *ptr = head;
        while(ptr != NULL) {
            if(ptr -> book_id == temp -> book_id){
                printf("\nThis ID is already available\n");
                break;
            }
            else if(ptr -> next == NULL) {
                ptr -> next = temp;
                break;
            }
            ptr = ptr -> next;
        }
    }
}

void deletion() {
    if(head == NULL) {
        printf("\nList is empty !!!!!\n");
    }
    else {
        int data;
        Node *ptr,*pre_ptr;
        ptr = head;
        show();
        printf("\nEnter book ID to delete : ");
        scanf("%d",&data);
        while(ptr != NULL) {
            if(ptr -> book_id == data) {
                if(head -> book_id == data) {
                    head = head -> next;
                }
                else if(ptr -> next == NULL) {
                    pre_ptr -> next = NULL;
                }
                else {
                    pre_ptr -> next = ptr ->next;
                }
                break;
            }
            else if(ptr -> next == NULL) {
                printf("\nBook ID not found for delete !!!!! \n");
                break;
            }
            pre_ptr = ptr;
            ptr = ptr -> next;
        }
    }
}

void count() {
    if(head == NULL) {
        printf("\nBook ID list is empty !!!!!\n");
    }
    else {
        Node *ptr = head;
        int count = 1 ;
        while(ptr -> next != NULL) {
            count++;
            ptr = ptr -> next;
        }
        printf("\nTotal number of books is : %d\n",count);
    }
}

void search() {
    if(head == NULL) {
        printf("\nBook ID list is empty !!!!!\n");
    }
    else {
        int data;
        Node* ptr = head;
        printf("\nEnter Book ID to search : ");
        scanf("%d",&data);
        while(ptr != NULL) {
            if(ptr ->book_id == data) {
                printf("\nBook available in list \n");
                break;
            }
            ptr = ptr ->next;
            if(ptr -> next == NULL) {
                printf("\nBook Not Available in list \n");
                break;
            }
        }
    }
}

void show() {
    if(head == NULL) {
        printf("\nBook List is Empty !!!!!");
    }
    else {
        printf("_______________\n");
        printf("|Book ID List  \n");
        Node *ptr = head;
        int count = 0;
        while(ptr != NULL){
            count++;
            printf("|%d.  %d\n",count,ptr -> book_id);     //book ID is print with number 
            ptr = ptr -> next;
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
                insertion();
                break;
            case 2:
                deletion();
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
    }while(choice >= 1 && choice <= 6);
    return 0;
}