/* Write a program to print the student name,id, age and input by user. 
    Using by function and function define in structure */
#include<iostream>
#include<conio.h>
using namespace std;
struct student
{
    string name;
    int id,age;
    void input()
    {
        cout<<"Enter student Name,id and age:";
        cin>>name>>id>>age;
    }
    void display()
    {
        cout<<"Student name:"<<name<<endl<<"Student id:"<<id<<endl<<"Student age:"<<age<<endl;
    }
};
int main()
{
    student d1,d2;
    d1.input();
    d2.input();
    d1.display();
    d2.display();
    return 0;
}