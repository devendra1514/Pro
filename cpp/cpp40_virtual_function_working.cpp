#include <iostream>
using namespace std;
class A
{
public:
    void f1() { cout << "Hello" << endl; }
    virtual void f2() { cout << "Hello" << endl; }
    virtual void f3() { cout << "Hello" << endl; }
    virtual void f4() { cout << "Hello" << endl; }
};
class B : public A
{
public:
    void f1() { cout << "World" << endl; }
    virtual void f2() { cout << "World" << endl; }
    void f4(int x) { cout << "World" << endl; }
};
int main()
{
    A a1, *ptr;
    B b1;
    ptr = &a1;

    ptr->f1();
    ptr->f2();
    ptr->f3();
    ptr->f4();
    // ptr->f4(5);  //error not matching function to call
    cout << "--------------" << endl;
    ptr = &b1;

    ptr->f1();
    ptr->f2();
    ptr->f3();
    ptr->f4();
    // ptr->f4(5);  //error not matching function to call
    return 0;
}