#include<iostream>
using namespace std;
class Student {
    private:
        int id;
        string name;
    public:
        void showData(){
            cout<<id<<endl<<name<<endl;
        }
        Student(){
            id=0;
            name="NULL";
        }
        Student(int num,string ch){
            id=num;
            name=ch;
        }
        Student(Student &s){     //if we defined a paramaterised constuctor then 
            id=s.id;             //also defined a default consturtor
            name=s.name;
        }
};
int main(){
    Student s1;
    s1.showData();
    Student s2(33,"dev");
    s2.showData();
    Student s3(s2);
    s3.showData();
    return 0;
}