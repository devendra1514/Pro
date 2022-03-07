#include<iostream>
using namespace std;
struct Student {
    int id;
    string name;
    void setData(){
        cout<<"Enter student id:";
        cin>>id;
        cout<<"Enter student name :";
        cin>>name;
    }
    void showData(){
        cout<<"Studnet id :"<<id<<endl;
        cout<<"Student name :"<<name<<endl;
    }
};
struct Student2 : Student {
    string subject;
    void setValue(){
        setData();
        cout<<"Enter student subject :";
        cin>>subject;
    }
    void showValue(){
        showData();
        cout<<"Student subject :"<<subject<<endl;
    }
};
struct Student3 : Student2 {
    string email;
    void setInfo(){
        setValue();
        cout<<"Enter your email :";
        cin>>email;
    }
    void showInfo(){
        showValue();
        cout<<"Student Email :"<<email<<endl;
    }
};
int main(){
    Student s1;
    s1.setData();
    s1.showData();
    Student2 s2;
    s2.setValue();
    s2.showValue();
    Student3 s3;
    s3.setInfo();
    s3.showInfo();
    return 0;
}