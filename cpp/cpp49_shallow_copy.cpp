#include <iostream>
using namespace std;

class Complex {
    private:
        int real, imaginary;
        int* ptr; 
    public:
        Complex() {
            ptr = new int;
            *ptr = 5;
        }
        void set(int x, int y) {
            real = x, imaginary = y;
        }
        void show() {
            cout<<real<<" "<<imaginary<<" "<<*ptr<<"\n";
        }
        Complex(Complex &c) {
            real = c.real;
            imaginary = c.imaginary;
            ptr = c.ptr;   
            (*ptr)++;   //address conatain in c.ptr is copied in ptr.
        }                   //if the value change of real then is change for real variable of all objects.
};

int main() {
    Complex c1;
    c1.set(5, 7);
    cout<<"C1 : \n";
    c1.show();
    Complex c2 = c1;
    cout<<"C2 = C1 : \n";
    cout<<"C2 : \n";
    c2.show();
    cout<<"C1 upadate : \n";
    c1.set(1, 3);
    c1.show();
    cout<<"C2 : \n";
    c2.show();
    return 0;
}