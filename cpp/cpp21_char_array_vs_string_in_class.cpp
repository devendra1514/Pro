#include<iostream>
using namespace std;
class Tv{
    int modelno, size;
    string colour;  //char array is not accept the function value
    public: 
        void setData(int m, int s, string c){
            modelno=m, size=s;
            colour=c;      //
        }
        void showData(){
            cout<<"Model no :"<<modelno;
            cout<<"\nsize :"<<size;
            cout<<"\ncolour :"<<colour;
        }
};
int main(){
    Tv t1;
    t1.setData(345,3,"black");
    t1.showData();
    return 0;
}