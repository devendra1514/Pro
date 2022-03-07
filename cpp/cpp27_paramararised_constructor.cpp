/* Paramatarised constructor */

#include<iostream>
using namespace std;
class Complex {
    private:
        int num1,num2;
    public:
        Complex(){            //it is compulsory to define default constructor because if we declared a object of this class than it is call by object otherwise they show error
            num1=0,num2=0;
        }
        Complex(int x,int y){      //paramatarised constructor
            num1=x,num2=y;
        }
        void showData(){
            cout<<num1<<endl<<num2<<endl;
        }
        
};

int main(){
    Complex c1(5,9), c2;
    c1.showData();
    return 0;
}