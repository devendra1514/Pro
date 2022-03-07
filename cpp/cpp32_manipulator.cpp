#include <iostream>
#include <iomanip>  //header file for manipulators
using namespace std;

int main() {
    int num = 5;
    cout<<setw(3)<<num<<endl;
    cout<<setw(1)<<num<<endl;
    cout<<setw(6)<<num<<endl;
    return 0;
}