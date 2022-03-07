/*WAP to create a structure to store student details and details input by structure and create a fuction
for take a input by user and display function use to display the result. program are private and public. */
#include<iostream>
using namespace std;
struct student
{
    private:
        string name;
        int id,age;
    public:
        void input()
        {
            cout<<"Enter student name,id,age:";
            cin>>name>>id>>age;
            if(id<0 || age<0)
            {
                id=-id;
                age=-age;
            }
        }
        void display()
        {
            cout<<name<<endl<<id<<endl<<age<<endl;
        }
};
int main()
{
    student d1;
    d1.input();
    d1.display();
    return 0;
}