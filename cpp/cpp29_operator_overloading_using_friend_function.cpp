#include<iostream>
using namespace std;
class Complex {
    private:
        int num1,num2;
    public:
        void setData(int x,int y){
            num1 = x,num2 = y;
        }
        void showData(){
            cout<<num1<<"    "<<num2<<endl;
        }
        friend Complex operator +(Complex, Complex);
        friend Complex operator -(Complex);
        friend Complex operator ++(Complex&);
        friend Complex operator --(Complex&);
        friend Complex operator ++(Complex&,int);
        friend Complex operator --(Complex&,int);
};
Complex operator +(Complex c1, Complex c2){
    Complex temp;
    temp.num1=c1.num1 + c2.num1;
    temp.num2=c1.num2 + c2.num2;
    return temp;
}
Complex operator -(Complex c){
    Complex temp;
    temp.num1=-c.num1;
    temp.num2=-c.num2;
    return temp;
}
Complex operator ++(Complex &c){
    Complex temp;
    temp.num1=++(c.num1);
    temp.num2=++(c.num2);
    return temp;
}
Complex operator --(Complex &c){
    Complex temp;
    temp.num1=--(c.num1);
    temp.num2=--(c.num2);
    return temp;
}
Complex operator ++(Complex &c,int){
    Complex temp;
    temp.num1=(c.num1)++;
    temp.num2=(c.num2)++;
    return temp;
}
Complex operator --(Complex &c,int){
    Complex temp;
    temp.num1=(c.num1)--;
    temp.num2=(c.num2)--;
    return temp;
}
int main(){
    Complex c1,c2,c3,c4,c5;
    c1.setData(4,6);
    c2.setData(3,4);
    c3=c1+c2;         //or c3=operator +(c1,c2);
    c3.showData();
    c4=-c3;
    c4.showData();
    ++c3;
    c3.showData();
    --c3;
    c3.showData();
    c4++;
    c4.showData();
    c4--;
    c4.showData();    
    return 0;
}