/* static member function*/
#include<iostream>
#include<conio.h>
using namespace std;
class fun
{
    private:
        static int count;
    public:
        static void increment()
        {
            count++;
            cout<<count<<endl;
        }
};
int fun::count;
int main()
{
    int c;
    cout<<"Enter how count you display:";
    cin>>c;
    for(int i=0;i<c;i++)
    {
        fun::increment();
    }
    return 0;
}