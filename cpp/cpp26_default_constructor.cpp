/* Default constructor */

#include<iostream>
using namespace std;
class Complex {
    private:
        int num1,num2;
    public:
        void showData(){
            cout<<num1<<endl<<num2<<endl;
        }
};
class Complex2 {
    private:
        int num1,num2;
    public:
        Complex2(){
            num1=0,num2=0;
        }
        void showData(){
            cout<<"num1 : "<<num1<<endl<<"num2 : "<<num2<<endl;
        }
};
int main(){
    Complex c1;     //c1 call the default constructor of Complex class and garbage value store
    Complex2 c2;   // c2 call the default constructor of complex2 class and initialize user defined value
    cout<<"This output print without constructor :"<<endl;
    c1.showData();
    cout<<"This output print with constructor :"<<endl;
    c2.showData();
    return 0;
}