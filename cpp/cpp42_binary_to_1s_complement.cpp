#include<iostream>
using namespace std;

class Binary {
    private:
        string data;
    public:
        void set(){
            cout<<"Enter binary number : ";
            cin>>data;
        }
        void convert() {
            for(int i = 0; data[i] != '\0'; i++){
                if(data[i] == '1'){
                    data[i] = '0';
                }
                else if(data[i] == '0'){
                    data[i] = '1';
                }
                else{
                    cout<<"Not proper binary number";
                    exit(0);
                }
            }
        }
        void show() {
            for(int i=0; data[i] != '\0';i++){
                cout<<data[i];
            }
        }
};

int main() {
    Binary b1;
    b1.set();
    b1.convert();
    b1.show();
    return 0;
}