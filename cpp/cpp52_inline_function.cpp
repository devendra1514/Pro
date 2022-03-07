#include <iostream>
using namespace std;

inline int add(int num1, int num2)   //inlin
{
    return num1+num2;
}

int main()
{
    int num1, num2;
    cout << "Enter Two Number : ";
    cin >> num1 >> num2;
    cout << "Sum is " << add(num1, num2);
    return 0;
}