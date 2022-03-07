#include <iostream>
using namespace std;

template<typename type1>
void fun(type1 num) {

    cout << num << "\n";
}

template<typename type1, typename type2>
void fun(type1 num1, type2 num2) {

    cout << num1 << " ";
    cout << num2 << "\n";
}

int main() {
    
    fun(4);
    fun(3, 3.3);
    return 0;
}