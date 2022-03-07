#include <iostream>
using namespace std;
class A {
    private:
        int a;
    public:
        A(int x) {
            a = x;
        }
        A() {

        }
        void show() {
            cout << a << endl ;
        }
};
class B : public A {
    private:
        int b;
    public:
        B(int x, int y) : A(x) {
            b = y;
        }
        B() : A() {       //A() is automatic call by B() and A() is first execute then after B() execute

        }
        void display() {
            show();
            cout << b << endl ;
        }
};
int main() {
    B b1(4,5), b2;  
    b1.display();
    b2.display();
    return 0;
}