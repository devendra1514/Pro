/* Operator overloading */

//Operators that operate on two operands are known as binary operators.
//Operators that operate on one operand are known as unary operators.

                    /* find the output in rough copy */

#include<iostream>
using namespace std;
class Complex{
    private:
        int a,b;
    public:
        void setdata(int x,int y){
            a=x,b=y;
        }
        void showdata(){
            cout<<a<<"  "<<b<<endl;
        }
        Complex operator +(Complex c)  {
            Complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return(temp);
        } 
        Complex operator -(){
            Complex temp;
            temp.a=-a;
            temp.b=-b;
            return (temp);
        }
        Complex operator ++(){       //no argument is passed in prefix operator function
            Complex temp;
            temp.a=++a;
            temp.b=++b;
            return(temp);
        }
        Complex operator --(int){  // int nothing take the value its written for postfic operator
            Complex temp;
            temp.a=a--;
            temp.b=b--;
            return(temp);
        }
};
int main(){
    Complex c1,c2,c3,c4,c5,c6;     //object declared

    c1.setdata(1,4);
    c2.setdata(4,1);

    c3 = c1 + c2;  //c3 = c1.operator +(c2);    //c1 is a caller object //+ is a binary operator
    c3.showdata(); 

    c4=-c3;         //c4 = c3.operator -();       //-(minus) is a unary operator
    c4.showdata();
    
    c5 = ++c3;       //c5 = c3.operator ++();     //(++) prefix unary oprator function
    c3.showdata();        
    c5.showdata();

    c6 = c3--;       //c6 = c3.operator --();
    c3.showdata();
    c6.showdata();

    return 0;
}