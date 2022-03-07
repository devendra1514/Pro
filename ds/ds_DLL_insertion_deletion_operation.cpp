#include<iostream>
using namespace std;
void insertStart();
void insertSpecific();
void insertEnd();
void deleteStart();
void deleteSpecific();
void deleteEnd();
void show();
void insertStart();
static int count_element = 0;

struct Node{        //structure of doubly linked list
    Node* prev;
    int data;
    Node* next;
};

Node* head = NULL;   //head initialized to NULL before the list is create 

void insertStart() {
    Node* temp;
    temp = (Node*)malloc(sizeof(Node));
    cout<< "Enter a element :" ;
    cin>> temp->data ;
    temp->prev = NULL;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
        count_element++;
        return;
    }
    else{
        temp -> next = head;
        head -> prev = temp;
        head = temp;
        count_element++;
        return;
    }
}

void insertSpecific(){
    int pos;     
    Node* ptr;
    ptr = head;
    if(head == NULL){
        cout<<"\nList is empty you can not insert the data\n";
        return;
    }
    show();
    cout<<"Enter which location you Enter the data : ";
    cin>>pos;
    if(pos == 1){
        insertStart();
    }
    else if(pos <= count_element){
        Node* temp;
        temp=(Node*)malloc(sizeof(Node));
        cout<<"Enter Element : ";
        cin>>temp->data;
        temp->prev = NULL;
        temp->next = NULL;
        ptr = head;
        for(int i = 2; i<pos; i++){
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        ptr->next->prev = temp;
        ptr->next = temp;
        temp->prev = ptr;
        count_element++;
    }
    else if(pos == count_element+1){
        insertEnd();
    }
    else{
        cout<<"\nWrong input !!!!!!\n";
    }
}

void insertEnd(){
    Node* temp;
    temp=(Node*)malloc(sizeof(Node));
    cout<<"Enter a element :";
    cin>>temp->data;
    temp->prev = NULL;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
        count_element++;
        return;
    }
    else{
        Node* ptr=head;
        while(ptr->next != NULL){
            ptr=ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
        count_element++;
    }
}

void deleteStart(){
    if(head == NULL){
        cout<<"\n-----List is empty-----\n";
        return;
    }
    else{
        Node* temp;
        temp=(Node*)malloc(sizeof(Node));
        temp = head;
        head = head->next;
        count_element--;
        free(temp);
    }
}

void deleteSpecific(){
    if(head == NULL){
        cout<<"\nList is empty you can't delete a item !!!!";
        return ;
    }
    int pos;
    show();
    cout<<"Enter the position of element which you want to delete : ";
    cin>>pos;
    Node* ptr = head;
    if(pos == 1){
        deleteStart();
    }
    else if(pos == count_element){
        deleteEnd();
    }
    else if(pos < count_element && pos > 1){
        ptr=head;
        for(int i=2; i<pos; i++){
            ptr = ptr->next;
        }
        ptr->next = ptr->next->next;
        ptr->next->prev = ptr;
        count_element--;
    }
    else{
        cout<<"\nWrong input !!!!!\n";
    }
}

void deleteEnd(){
    if(head == NULL){
        cout<<"\n-----List is empty-----\n";
        return;
    }
    else{
        Node* curr;
        curr = head;
        Node* back;
        if(head->next == NULL){    //this is because if one node is present then it is not deleted by else conditon
            head = NULL;
            count_element--;
            return;
        }
        else{
            while(curr->next != NULL){
                back = curr;
                curr = curr->next;
            }
            back->next = NULL;
            curr = NULL;
            count_element--;
            return; 
        }
    }
}

void show(){
    int count=1;
    if(head == NULL){
        cout<<"\n-----List is empty-----\n";
        return ;
    }
    else{
        cout<<"_______________"<<endl;
        cout<<"|   list is   \n";
        Node* ptr = head;
        while(ptr != NULL){
            cout<<"|"<<count<<".   "<<ptr->data<<endl;
            ptr=ptr->next;
            count++;
        }
        cout<<"|_______________"<<endl;
    }
}

int main(){
    int choice;
    do{
        cout<<"\n_________________________"<<endl;
        cout<<"|1. Insert at start     |"<<endl;
        cout<<"|2. Insert at specific  |"<<endl;
        cout<<"|3. Insert at end       |"<<endl;
        cout<<"|4. Delete at start     |"<<endl;
        cout<<"|5. Delete at specific  |"<<endl;
        cout<<"|6. Delete at end       |"<<endl;
        cout<<"|7. Show                |"<<endl;
        cout<<"|8. Exit                |"<<endl;
        cout<<"|_______________________|"<<endl;
        cout<<">>>Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:
                insertStart();
                break;
            case 2:
                insertSpecific();
                break;
            case 3:
                insertEnd();
                break;
            case 4:
                deleteStart();
                break;
            case 5:
                deleteSpecific();
                break;
            case 6:
                deleteEnd();
                break;
            case 7:
                show();
                break;
            case 8:
                exit(1);
                break;
        }
    }while(choice >=1 && choice <9);
    return 0;
}