/* Write a program to add two complex number using class object and member function*/

#include<iostream>
using namespace std;
class Complex{
    private:
        int num1,num2;
    public:
        void setData(int x,int y){
            num1=x,num2=y;
        }
        void add(Complex c1, Complex c2){
            num1=c1.num1+c2.num1;
            num2=c1.num2+c2.num2;
        }
        void showData(){
            cout<<"num1 = "<<num1<<endl<<"num2 = "<<num2<<endl;
        }
};
int main(){
    Complex c1,c2,c3;
    c1.setData(4,8);
    c2.setData(5,3);
    c3.add(c1,c2);
    c3.showData();
    return 0;
}