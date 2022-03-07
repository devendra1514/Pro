/* WAP to store three(3)  student information in one object, using array of class */

#include<iostream>
using namespace std;
class Student {
    private:
        int id;
        string name, subject;
        static int countSet;
        static int countShow;
    public:
        void setData(){
            countSet++;
            fflush(stdin);    //to clear the privious garbage data
            cout<<"Enter "<<countSet<<" student id :";
            cin>>id;
            fflush(stdin);    //to clear the privious garbage data
            cout<<"Enter "<<countSet<<" student name :";
            cin>>name;
            fflush(stdin);    //to clear the privious garbage data
            cout<<"Enter "<<countSet<<" student subject :";
            cin>>subject;
        }
        void showData(){
            countShow++;        
            cout<<countShow<<" student id : "<<id<<endl;
            cout<<countShow<<" student name : "<<name<<endl;
            cout<<countShow<<" student subject : "<<subject<<endl;    
        }
};
int Student :: countSet;
int Student :: countShow;
int main(){
    Student s[3];
    s[0].setData();
    s[1].setData();
    s[2].setData();
    s[0].showData();
    s[1].showData();
    s[2].showData();
    return 0;
}