#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Entet a number:";
    cin>>num;
    cout<<"number is "<<num<<endl;
    int &new_num = num;
    new_num++;
    cout<<"Number increament by referance variable:"<<endl;
    cout<<"number = "<<new_num;
    return 0;
}