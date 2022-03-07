#include <iostream>
using namespace std;
void insertStart();
void insertSpecific();
void insertEnd();
void deleteStart();
void deleteSpecific();
void deleteEnd();
static int count_element;

struct Node
{
    int data;
    Node *next;
};

void insertStart()
{
}

int main()
{
    int choice;
    do
    {
        cout << "\n_________________________" << endl;
        cout << "|1. Insert at start     |" << endl;
        cout << "|2. Insert at specific  |" << endl;
        cout << "|3. Insert at end       |" << endl;
        cout << "|4. Delete at start     |" << endl;
        cout << "|5. Delete at specific  |" << endl;
        cout << "|6. Delete at end       |" << endl;
        cout << "|7. Show                |" << endl;
        cout << "|8. Exit                |" << endl;
        cout << "|_______________________|" << endl;
        cout << ">>>Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
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
            // show();
            break;
        case 8:
            exit(1);
            break;
        }
    } while (choice >= 1 && choice <= 8);
}