#include<iostream>
using namespace std;

int main() {
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int *ptr = new int[size];
    cout<<"Enter "<<size<<" element :";
    for(int i=0; i<size; i++) {
        cin>>ptr[i];
    }
    for(int i=0; i<size; i++) {
        cout<<ptr[i];
    }
    delete []ptr;
    return 0;
}