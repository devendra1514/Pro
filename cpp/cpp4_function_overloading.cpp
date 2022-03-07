/* Write a program to calculate area of circle and ractangle. conditon:name of function is same
"function overloading" */

#include<iostream>
using namespace std;
void area(int );
void area(int ,int );                    //same function name is function overloading
int main()
{
    int radius;
    cout<<"Enter radius of circle:";
    cin>>radius;
    area(radius);
    int length,breadth;
    cout<<"Enter length and breadth of ractangle:";
    cin>>length>>breadth;
    area(length,breadth);
    return 0;
}
void area(int radius)
{
    cout<<"Area of circle of "<<radius<<" is "<<3.14*radius*radius<<endl;
}
void area(int length,int breadth)
{
    cout<<"Area of ractangle of "<<length<<" & "<<breadth<<" is "<<length*breadth;
}
