#include<iostream>
using namespace std;

template <class type>         //if argument is same then we use one class
type sum(type a, type b){
    return (a+b);
}

template <class X, class Y>     //if argument is different 
X sum(X a, Y b){                //if input is X then ouptut is also X
    return (a+b);          //return value depend on the first input value
}

int main() {
    cout<<sum(4,5)<<endl;         //before run predict the output
    cout<<sum(5.4,9.2)<<endl;
    cout<<sum(5, 5.5)<<endl;
    cout<<sum(5.5, 5)<<endl;
    cout<<sum(5, 'a')<<endl;
    cout<<sum('a', 5)<<endl;
    return 0;
}