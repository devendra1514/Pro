#include <iostream>
using namespace std;

struct Array {
    int size, *arr;
};

void set(Array *ptr) {
    cin>>ptr->size;
    ptr->arr = new int[ptr->size];
    for(int i = 0; i < ptr->size; i++) {
        cin>>ptr->arr[i];
    }
}

int main() {
    int size, query;
    cin>>size>>query;
    Array *ptr;
    ptr = new Array[size];
    for(int i = 0; i < size; i++) {
        set(&ptr[i]);
    }
    int row,column;
    int arr[query][2];
    for(int i = 0; i < query; i++) {
        cin>>row>>column;
        arr[i][0] = row;
        arr[i][1] = column;
    }
    for(int i = 0; i < query; i++) {
        cout<<ptr[arr[i][0]].arr[arr[i][1]]<<"\n";
    }
    delete []ptr;
    return 0;
}