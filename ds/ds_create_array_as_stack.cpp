#include <iostream>
using namespace std;

// int size = 5;
int stack[5], top = -1;

bool isFull() {
    if(top == 5) {
        return true;
    }
    else{
        return false;
    }
}

bool isEmpty() {
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}

void push(int temp) {
    if(isFull()) {
        cout << "Stack is full !!!!!";
    }
    else{
        top++;
        stack[top] = temp;
    }
}

int pop() {
    int temp;
    if(isEmpty()){
        cout << "Stack is empty !!!!!";
    }
    else{
        temp = stack[top];
        top--;
        return temp;
    }
}

int peek() {
    if(isEmpty()){
        cout << "Stack is empty !!!!!";
    }
    else{
        return stack[top];
    }
}
int main() {
    int choice, data;;
    do {
        cout << "____________" << endl;
        cout << "|1. Push   |" << endl;
        cout << "|2. Pop    |" << endl;
        cout << "|3. Peek   |" << endl;
        cout << "|4. Exit   |" << endl;
        cout << "------------" << endl;
        cout << ">>> Enter your choice : ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter a element : ";
                cin >> data;
                push(data);
                break;
            case 2:
                data = pop();
                cout << "Your data is : " << data;
                break;
            case 3:
                data = peek();
                cout << "Your data is : " << data;
                break;
            case 4:
                exit(1);
        }
    }while (choice >= 1 && choice <=4);
    return 0;
}