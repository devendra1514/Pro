#include<iostream>
using namespace std;
class Student {
    protected:
        string name;
        int id;
    public:
        virtual void setInfo(){
            cout<<"Enter Student Name : ";
            cin>>name;
            cout<<"Enter Student Id : ";
            cin>>id;
        }
        virtual void showInfo() {
            cout<<"Student Name : "<<name<<endl;
            cout<<"Student Id   : "<<id<<endl;
        }
};
class Student2 : public Student {
    protected:
        string course;
    public:
        void setInfo() {
            cout<<"Enter Student Name : ";
            cin>>name;
            cout<<"Enter Student Id : ";
            cin>>id;
            cout<<"Enter Student Course : ";
            cin>>course;
        }
        void showInfo() {
            cout<<"Student Name : "<<name<<endl;
            cout<<"Student Id   : "<<id<<endl;
            cout<<"Student Course : "<<course<<endl;
        }
};

int main() {
    Student s1, *student,*student2;
    Student2 s2 ;
    student = &s1;
    student2 = &s2;
    student->setInfo();
    s1.showInfo();
    student2->setInfo();  /*if student2 pointer object call the setInfo() function then it execute
                            the student class method we want to call the setInfo() function of student2 
                            class so we use virtual keyword to exicute setInfo() function of student1 
                            class */
    s2.showInfo();

    return 0;
}