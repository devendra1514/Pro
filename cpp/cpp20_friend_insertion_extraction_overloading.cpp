#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
    int a,b;
    public:
        friend ostream& operator<<(ostream&,Complex);
        friend istream& operator>>(istream&,Complex&);
};
ostream& operator<<(ostream &dout,Complex C)
{
    cout<<"you enter:\n";
    cout<<"a="<<C.a<<"  b="<<C.b;
    return(dout);
}
istream& operator>>(istream &din,Complex &C) //C object contain reference of c1  
{
    cout<<"Enter two number:";
    cin>>C.a>>C.b;
    return(din);
}
int main()
{
    Complex c1;
    // operator>>(cout,c1);
    // operator<<(cin,c1);
    cin>>c1;    
    cout<<c1;  //or    operator<<(cout,c1);
}
