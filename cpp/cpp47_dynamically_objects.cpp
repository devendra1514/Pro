#include <iostream>
using namespace std;

class Complex {
    private:
        int real, imaginary;
    public:
        Complex() {
            cout<<"Enter Real Value : ";
            cin>>real;
            cout<<"Enter Imaginary Value : ";
            cin>>imaginary;
        }
        void show() {
            cout<<"Real = "<<real<<"\n";
            cout<<"Imaginary = "<<imaginary<<"\n";
        }
};

int main() {
    int size;
    cout<<"Enter size : ";
    cin>>size;
    Complex* arr = new Complex[size];

    for(int i = 0; i < size; i++) {
        arr[i].show();
    }
    delete(arr);
    return 0;
}