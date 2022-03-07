/* WAP to create a class to represent the complex number and one object contain two value*/

#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void set_data(int x,int y)
        {
            a=x,b=y;
        }
        void show_data()
        {
            cout<<"a="<<a<<endl<<"b="<<b<<endl;
        }
};
int main()
{
    Complex s1;
    s1.set_data(2,4);
    s1.show_data();
    return 0;
}