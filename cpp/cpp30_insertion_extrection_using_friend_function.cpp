#include<iostream>
using namespace std;
class Student {
    private:
        int id;
        string name;
    public:
        void setData(int x, string ch){
            id=x, name=ch;
        }
        void showData(){
            cout<<"Student id : "<<id<<endl;
            cout<<"Student name : "<<name<<endl;
        }
        friend istream& operator >>(istream&, Student&);
        friend ostream& operator <<(ostream&, Student);
};
istream& operator >>(istream& din, Student& s){
    fflush(stdin);
    cout<<"Enter student id : ";
    din>>s.id;
    fflush(stdin);
    cout<<"Enter student name : ";
    din>>s.name;
    fflush(stdin);
    return din;
}
ostream& operator <<(ostream& dout, Student s){
    cout<<"Student id : "<<s.id<<endl;
    cout<<"Student name : "<<s.name<<endl;
    return dout;
}
int main(){
    Student s1,s2,s3;
    // cin>>s1;       //operator>>(cin,s1);              //cin and s1 pass by argument
    // cin>>s2>>s3;   //operator>>(cin,s2)>>(cin,s3);    when operator>>(cin,s2) is return refernece of cin then after cin>>(cin,s3) call
    // cout<<s1;      //operator<<(cout,s1);
    // cout<<s2<<s3;  //operator<<(cout,s2)<<(cout,s3);  when operator<<(cout,s2) function return reference of cout then cout<<(cout,s3) call
    operator>>(cin,s1);
    cin>>(cin,s2)>>(cin,s3);
    operator<<(cout,s1);
    cout<<(cout,s2);
    cout<<(cout,s3);
    return 0;
}