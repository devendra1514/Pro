/* 5.Write a program to print the student detail, using structure and also use functon.
 */   /* it is possible to define a function  in structure */

#include<iostream>
#include<string.h>
using namespace std;
struct student                    // typedef is ignored by c++
{
    string name;
    int id;
    int age;
};
student input()                 //function is defined in the structure it is possible. 
{
    student d1;
    cout<<"Enter student name:";        //(d1.name="Deven";) is wrong statement.
    getline(cin, d1.name);               //strcpy(d1.name,"Dev");
    cout<<"Enter student id:";
    cin>>d1.id;
    cout<<"Enter student age:";
    cin>>d1.age;
    return (d1);
}
void display(student d2)
{
    cout<<"This output is print by structure:"<<endl;
    cout<<"Student Name:"<<d2.name<<endl<<"Student id:"<<d2.id<<endl<<"Student age:"<<d2.age;
}
int main()
{
    student d;
    d=input();
    display(d);
    return 0;
}