#include<iostream>
using namespace std;

class A;      //forward declaration

class B {
    public:
        void showData(A);    //compile dont know what is A so we use forward declaration
};

class A {
    private:
        int num1,num2;
    public:
        void setData(int x,int y) {
            num1=x,num2=y;
        }
        friend class B;    //class B is a Friend of class A
};

void B :: showData(A a){
    cout<<a.num1<<"  "<<a.num2<<endl;
}

int main() {
    A a1;
    B b1;
    a1.setData(3,4);
    b1.showData(a1);
    return 0;
}
