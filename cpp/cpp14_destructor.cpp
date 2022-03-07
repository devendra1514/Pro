/* destructor */  // the destructor run before the end of program
#include<iostream>
#include<conio.h>
using namespace std;
class ex
{
    private:
        int a,b;
    public:
        void set(int x,int y)
        {
            a=x,b=y;
        }
        void show()
        {
            cout<<a<<endl;
            cout<<b<<endl;
        }
        ~ex()
        {
            cout<<"object end";
        }
};
int main()
{
    ex e1;
    e1.set(5,6);
    e1.show();  
    return 0;
}