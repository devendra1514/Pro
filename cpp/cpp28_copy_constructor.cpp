/* Copy constructor */

#include<iostream>
using namespace std;
class Complex {
    private:
        int num1,num2;
    public:
        Complex(){         //it is compulsory to define default constructor because if we declared a object of this class than it is call by object otherwise they show error
            num1=0,num2=0;
        }
        Complex(Complex &c){
            num1=c.num1;
            num2=c.num2;
        }
        void setData(){
            cout<<"Enter first element of object :";
            cin>>num1;
            cout<<"Enter second element of object :";
            cin>>num2;
        }
        void showData(){
            cout<<num1<<endl<<num2<<endl;
        }
        
};

int main(){
    Complex c1;
    c1.showData();
    c1.setData();
    Complex c2(c1);
    c2.showData();
    return 0;
}