#include <iostream>
using namespace std;

int fun(int num, const int temp)
{
    // temp = 5;       // the value of temp is not change
    return num * temp;
}

int main()
{
    cout << fun(5, 6);
    return 0;
}