/* Initializer list is use to initialize const and reference data member */
#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        int id;
        const int year;
        int &num;
    public:
        Student(int i, int y): year(y), num(i) {
            name = "unknown";
            id = 0;
        }
        void show() {
            num++;
            cout<<name<<"  "<<id<<"  "<<year<<"  "<<num;
        }
};

int main() {
    Student s(33, 2021);
    s.show();
    return 0;
}