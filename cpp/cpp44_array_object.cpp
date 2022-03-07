#include<iostream>
using namespace std;
template <class X>
class Array {
    private:
        struct CreateArray {
            int capacity;
            X *arr;
        };
    public:
        CreateArray *p;
        Array(int capacity){
            p = new CreateArray();
            p->capacity = capacity;
            p->arr = new X[capacity];
        }
        void addElement(int index, X data){
            if(index >= 0 && index < p->capacity){
                p->arr[index] = data;
            }
            else {
                cout<<"\nIndex is not valid";
            }
        }
        void viewElement(int index){
            if(index >= 0 && index < p->capacity){
                cout<<p->arr[index]<<endl;
            }
            else {
                cout<<"\nIndex is not valid";
                return;
            }
        }
};
int main() {
    Array <int>a(5);      //to decide what is X in class Array
    a.addElement(0,3);
    a.addElement(4,4);
    a.viewElement(0);
    a.viewElement(4);
    a.viewElement(3);  //garbage value print
    return 0;
}