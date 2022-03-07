#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* head=NULL;
void insertion()
{
    Node* temp=(Node*)malloc(sizeof(Node));
    cout<<"Enter a element:";
    cin>>temp->data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        Node* ptr=head;
        while(ptr->next != NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}
void deletion()
{
    if(head==NULL)
    {
        cout<<"list is empty";
        return;
    }
    else
    {
        Node* ptr=head;
        Node* preptr;
        while(ptr->next != NULL)
        {
            preptr=ptr;
            ptr=ptr->next;
        }        
        preptr->next=NULL;
    }
}
void show()
{
    if(head==NULL)
    {
        cout<<"List is empty";
    }
    else
    {
        Node* ptr=head;
        while(ptr != NULL)
        {
            cout<<ptr->data<<endl;
            ptr=ptr->next;
        }
    }
}
int main()
{
    int choice=0;
    do{
        cout<<"\n1.Insertion\n2.Deletion\n3.Show\n4.Exit";
        cout<<"\n>>>Enter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
                insertion();
                break;
            case 2:
                deletion();
                break;
            case 3:
                show();
                break;
            case 4:
                exit(0);
        }
    }while(choice == 1 || choice == 2 || choice == 3 || choice == 4 );
}