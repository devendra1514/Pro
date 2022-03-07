#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct Node                 //create structure
{
    int data;                
    struct Node* next;
};

void insertstart();            //function decleration
void insertmiddile(); 
void insertend();
void show();
Node* create();

Node* head=NULL;        //create and initialized head pointer. head is a main pointer to point list
                       //it is initialized NULL because list is empty head nothing point list
Node* create()               //create create() function it is return a address
{
    return((Node*)malloc(sizeof(Node)));
}

void insertStart()
{
    Node* temp;
    temp=create();
    cout<<"Enter value:";
    cin>>temp->data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}
void insertMiddile()
{
    Node* temp,*ptr;
    temp=create();
    cout<<"Enter value:";
    cin>>temp->data;
    temp->next=NULL;
    if(head==NULL)
    {
        cout<<"The link is already empty so i am add this element at the first in the list\n";
        head=temp;
        return;
    }
    else
    {
        int value=0;
        ptr=head;
        show();
        cout<<"which position you enter the element after:";
        cin>>value;
        while(ptr->data!=value)
        {
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=temp;  
    }
}
void insertEnd()       //define insertend() function it is use for add a node it the end of list
{
    Node* temp,*ptr;    //declared temp pointer 
    temp=create();
    cout<<"Enter value:";  
    cin>>temp->data;
    temp->next=NULL;      //temp->next is NULL because temp is end node of the list
    if(head==NULL)        //condition check if head is NULL then head is initialized to temp
    {
        head=temp;        //head initialized to temp
    }
    else               //if head is not NULL then else condition is executed
    {
        ptr=head;       //ptr is initialized to head because we can not change head pointer 
                    
        while(ptr->next!=NULL)  //this line executed while ptr->next != NULL 
        {
            ptr=ptr->next;      
        }
        ptr->next=temp;    
    }
}
void show()        //define show() function 
{
    if(head==NULL)     
    {
        cout<<"link is empty";
        return;
    }
    else
    {
        cout<<"\nList is:\n";
        Node* s;
        s=head;
        do
        {
            cout<<s->data<<"\n";
            s=s->next;
        }while(s != NULL);
    }
}



int main()
{
    int choice=0;
    do{
        cout<<"\n__________________________";
        cout<<"\n|1.Insert at the begining|";
        cout<<"\n|2.Insert at the middile |";
        cout<<"\n|3.Insert at the end     |";
        cout<<"\n|4.show                  |";
        cout<<"\n|5.Exit                  |";
        cout<<"\n|------------------------|";
        cout<<"\n>>>Enter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                insertStart();
                break;
            }
            case 2:
            {
                insertMiddile();
                break;
            }
            case 3:
            {
                insertEnd();
                break;
            }
            case 4:
            {
                show();
                break;
            }
            case 5:
            {
                free(head);
                exit (0);
            }
            default:
            {
                free(head);
            }
        }
    }while(choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 );
    return 0;
}