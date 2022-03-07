/* static member variable*/
#include<iostream>
#include<conio.h>
using namespace std;
class s
{
    private:
        static int count;
    public:
        void increment()
        {
            count++;
        }
        void display()
        {
            cout<<count;
        }
};
int s::count;
int main()
{
    s a1,a2;
    a1.increment();
    a2.increment();
    a1.display();
    a2.display();
    return 0;
}