#include<iostream>
using namespace std;
class A{
    protected:
        string name="Devendra";
};
class B : protected A{
    protected:
        int id=33;
};
class C : protected B{
    protected:
        float salary=55.55;
    public:
        void showData(){
            cout<<"Name :"<<name<<endl;
            cout<<"Id : "<<id<<endl;
            cout<<"Salary :"<<salary<<endl;
        }
};
class D : protected C{
    string address="Indore";
    public:
        void showInfo(){
            showData();
            cout<<"address :"<<address<<endl;
        }
};
int main(){
    C c1;
    D d1;
    c1.showData();
    d1.showInfo();
    return 0;
}