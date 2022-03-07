#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin;
    fin.open("cpp46.dat", ios::in);
    if(!fin) {
        cout<<"File not found !!!!!";
    }
    else {
        char ch;
        do {
            ch = fin.get();
            cout<<ch;
        }while( !fin.eof());
    }
    fin.close();
    return 0;
}