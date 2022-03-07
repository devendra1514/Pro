#include<iostream>
using namespace std;

class Ractangle {
    private:
        int length, breadth;
    public:
        // this code is succesfully compile & run but the value is not store in length and breadth due to name collision
        // void setDimension(int length, int breadth) {
        //     length = length, breadth = breadth;
        // }
        void setDimension(int length, int breadth) {
            this->length = length, this->breadth = breadth;  //this keyword is use to access the original data member of object
        }                                                   
        void showDimension() {
            cout<<"Length : "<<length<<endl<<"Breadth : "<<breadth<<endl;
        }
};
int main() {
    Ractangle r1;
    r1.setDimension(6,4);
    r1.showDimension();
    return 0;
}