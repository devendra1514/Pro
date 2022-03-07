#include <iostream>
using namespace std;

void show();

struct Node {
    int book_id;
    Node *next;
};

Node *head = NULL;

void insertion() {
    Node* temp;
    temp = (Node*)malloc(sizeof(Node));
    cout<<"Enter Book ID : ";
    cin>>temp -> book_id;
    temp -> next = NULL;
    if(head == NULL) {
        head = temp;
    }
    else {
        Node *ptr = head;
        while(ptr != NULL) {
            if(ptr -> book_id == temp -> book_id){
                cout<<"\nThis ID is already available\n";
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
        cout<<"\nList is empty !!!!!\n";
    }
    else {
        int data;
        Node *ptr,*pre_ptr;
        ptr = head;
        show();
        cout<<"\nEnter book id to delete : ";
        cin>>data;
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
                cout<<"\nBook ID not found for delete !!!!! \n";
                break;
            }
            pre_ptr = ptr;
            ptr = ptr ->next;
        }
    }
}

void count() {
    if(head == NULL) {
        cout<<"\nBook ID list is empty !!!!!\n";
    }
    else {
        Node *ptr = head;
        int count = 1 ;
        while(ptr -> next != NULL) {
            count++;
            ptr = ptr -> next;
        }
        cout<<"\nTotal number of books is : "<<count<<"\n";
    }
}

void search() {
    if(head == NULL) {
        cout<<"\nBook ID list is empty !!!!!\n";
    }
    else {
        int data;
        Node* ptr = head;
        cout<<"\nEnter Book ID to search : ";
        cin>>data;
        while(ptr != NULL) {
            if(ptr ->book_id == data) {
                cout<<"\nBook available in list \n";
                break;
            }
            ptr = ptr ->next;
            if(ptr -> next == NULL) {
                cout<<"\nBook Not Available in list \n";
                break;
            }
        }
    }
}

void show() {
    if(head == NULL) {
        cout<<"\nBook List is Empty !!!!!";
    }
    else {
        cout<<"_______________\n";
        cout<<"|Book ID List  \n";
        Node *ptr = head;
        int count = 0;
        while(ptr != NULL){
            count++;
            cout<<"|"<<count<<".  "<<ptr -> book_id<<"\n";     //book ID is print with number 
            ptr = ptr -> next;
        }
    }
}

int main() {
    int choice;
    do {
        cout<<"\n_______________________";
        cout<<"\n|1. Insert Book ID    |";
        cout<<"\n|2. Delete Book ID    |";
        cout<<"\n|3. Count Book ID     |";
        cout<<"\n|4. Search Book ID    |";
        cout<<"\n|5. Show Book ID      |";
        cout<<"\n|6. Exit              |";
        cout<<"\n-----------------------";
        cout<<"\n>>>Enter Your Choice : ";
        cin>>choice;
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
    }while(choice >=1 && choice <=6);
    return 0;
}