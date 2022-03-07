#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node *next;
};

int main() {
    int size;
    cout << "Enter Total Element : ";
    cin >> size;

    vector<int> vecArr;
    cout << "Enter " << size << " Element  : ";
    for(int i = 0; i < size; i++) {

        int data;
        cin >> data;
        vecArr.push_back(data);
    }
    Node *modeArr = new Node[100]{NULL};
    for(int i = 0; i < size; i++) {
        
        if(modeArr[i].next == NULL){
            cout << "Hello ";
        }

    }
    return 0;
}