#include<iostream>
using namespace std;

struct Student {
    string name, enroll_no, class_name;
    int *marks;
    int sum = 0 ;
    int total;
    float avg ;
    void setStudentInfo() {
        fflush(stdin);
        cout<<"Enter Student Name : ";
        getline(cin,name);
        fflush(stdin);
        cout<<"Enter Class : ";
        getline(cin,class_name);
        fflush(stdin);
        cout<<"Enter Enrollment No : ";
        getline(cin,enroll_no);
        cout<<"Enter Number of subject : ";
        cin>>total;
        marks = (int*) malloc (sizeof(int)*total);
        for(int i = 0 ; i < total ; i++ ) {
            cout<<"Enter "<<i+1<<" Subject Marks : ";
            cin>>*(marks + i);
            sum = sum + *(marks + i);
        }
        avg = float(sum) / total;
    }
    void showStudentInfo() {
        cout<<"\n__________________________________________________________________________";
        cout<<"\n|  Student Name   : "<<name<<"            Class : "<<class_name;
        cout<<"\n|  Enrollment No. : "<<enroll_no;
        cout<<"\n|  Marks in different Subject : ";
        for(int i = 0 ; i < total ; i++ ) {
            cout<<"\n|         |"<<*(marks + i);
        }
        cout<<"\n|         |";
        cout<<"\n|  Total  |"<<sum<<"       |Average : "<<avg<<"\n\n";
    }
};
int main() {
    Student s1;
    s1.setStudentInfo();
    s1.showStudentInfo();
    return 0;
}