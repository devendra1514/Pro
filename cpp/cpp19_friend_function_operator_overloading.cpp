#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
        void setdata(int x,int y)
        {
            a=x,b=y;
        }
        void showdata()
        {
            cout<<"a="<<a<<"  "<<"b="<<b<<endl;
        }
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex);
};
Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}
Complex operator-(Complex c)
{
    Complex temp;
    temp.a=-c.a;
    temp.b=-c.b;
    return(temp);
}

int main()
{
    Complex c1,c2,c3,c4;
    c1.setdata(3,5);
    c2.setdata(7,5);
    c3=c1+c2;     // or  c3=operator+(c1,c2);   //binary operator+() is call with two argument
    c3.showdata();
    c4=-c3;         //- is a unary opertar
                    //no function call through object, (-)minus fuction direct call by main()
    c4.showdata();
    return 0;
}