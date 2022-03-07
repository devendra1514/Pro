#include <iostream>
using namespace std;

class Array {
    private : 
        int *arr = (int*)malloc(sizeof(int));
        int len = 0;
        int capacity = 0;
    public : 
        void add(int data) {
            if(len >= capacity) {
                if(capacity == 0) {
                    capacity = 1;
                }
                else {
                    capacity *=2;
                }
                int *newArr = (int*)malloc(sizeof(int) * capacity);
                for(int i = 0; i <= len; i++) {
                    newArr[i] = arr[i];
                }
                arr = newArr;
            }
            arr[len] = data;
            len++;
        }
        
        int length() {
            return len;
        }

        void show() {
            for(int i = 0; i < len; i++) {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
};

int main() {
    Array arr;
    arr.add(45);
    arr.add(50);
    arr.add(30);
    arr.add(35);
    arr.add(40);
    arr.show();
    cout << arr.length();
    return 0;
}