/* friend function 
>>>friend function is not a class member so we declared in private public both.
>>>it is declared in class with "friend" keyword.
>>>it is defined outside the class.
>>>it is access any member of class.
*/

#include<iostream>
using namespace std;
class Complex {
    private:
        int num1,num2;
    public:
        void setData() {
            cout<<"Enter first number:";
            cin>>num1;
            cout<<"Enter second number:";
            cin>>num2;
        }
        void showData() {
            cout<<num1<<endl<<num2<<endl;
        }
        friend void add(Complex,Complex);   //friend function declaration
};
void add(Complex c1,Complex c2){           //friend function define
    cout<<"sum of first number : "<<c1.num1+c2.num1<<endl;
    cout<<"sum of second number : "<<c1.num2+c2.num2<<endl;    
}
int main(){
    Complex c1,c2,sum;
    c1.setData();
    c2.setData();
    add(c1,c2);
    return 0;
}