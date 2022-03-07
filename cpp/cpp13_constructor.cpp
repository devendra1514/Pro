/* constructor in c++ */
#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
    private:
        int a=0,b=0;
    public:
        complex(int x,int y)     //parameterized constructor
        {
            a=x,b=y;
        }
        complex(int x)        //constructor overloading
        {
            a=x,b=0;
        }  
        complex()         //constructor does not have return any value 
        {}
        complex(complex &c)     //reference variable or copy constuctor and take complex value 
        {
            a=c.a;
            b=c.b;
        }
        void show()    //default constructor
        {
            printf("%d\t",a);
            printf("%d\n",b);
        }
};
int main()
{
    complex a1(5,6),a2(7),a3;
    complex a4(a1);
    a1.show();          //show function call by a1 object
    a2.show();          //same 
    a3.show();          //same
    a4.show();          //same
    return 0;
}