/* Local static variable*/
#include <iostream>
#include <conio.h>
using namespace std;
void f1()
{
    static int count;
    count++;
    cout << count;
}
int main()
{
    f1();
    f1();
    return 0;
}