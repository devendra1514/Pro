#include<iostream>
#include<stdio.h>
using namespace std;
struct queueNode
{
    int data;
    queueNode* next;
};
queueNode* front=NULL,*rear=NULL;
void insertion()
{
    queueNode* temp=(queueNode*)(malloc(sizeof(queueNode)));
    cout<<"Enter a element:";
    cin>>temp->data;
    temp->next=NULL;
    if(front==NULL)
    {
        front=temp;
        rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}
void deletion()
{
    if(front==NULL)
    {
        cout<<"queue is empty";
    }
    else
    {
        queueNode* temp;
        temp=(queueNode*)malloc(sizeof(queueNode));
        temp=front;
        front=front->next;
        free(temp);
    }
}
void show()
{
    if(front==NULL)
    {
        cout<<"queue is empty";
        return;
    }
    else
    {
        queueNode* temp;
        temp=front;
        cout<<"quese is: \n";
        while(temp != NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
}
int main()
{
    int choice=0;
    while(1)
    {
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
    }
    return 0;
}