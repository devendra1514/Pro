#include<iostream>
using namespace std;
class Complex {
    private:
        int num1, num2;
    public:
        void setData(int x, int y) {
            num1 = x, num2 = y;
        }
        void showData() {
            cout<<num1<<endl<<num2<<endl;
        }
};
int main() {
    Complex c1;
    Complex *p = &c1;
    c1.setData(4,5);
    c1.showData();
    // cout<<p->num2;    // we can not access private mamber of class using pointer
    p->showData();
    return 0;
}