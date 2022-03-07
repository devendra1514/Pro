/* friend funtion can become friend to more then one function */

#include<iostream>
using namespace std;
class Complex1;
class Complex2;
class Complex1 {
    private:
        int num1,num2;
    public:
        void setData(int x,int y){
            num1 = x,num2 = y;
        }
        friend void sum(Complex1, Complex2);
};
class Complex2 {
    private:
        int num1, num2;
    public:
        void setData(int x, int y){
            num1 = x,num2 = y;
        }
        friend void sum(Complex1, Complex2);
};
void sum(Complex1 c1, Complex2 c2){
    cout<<c1.num1 + c2.num1<<endl;
    cout<<c1.num2 + c2.num2<<endl;
}
int main(){
    Complex1 c1;
    Complex2 c2;
    c1.setData(4,6);
    c2.setData(3,4);
    sum(c1,c2);
    return 0;
}