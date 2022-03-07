#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin;
    fin.open("cpp45.txt");
    char ch;
    ch = fin.get();       //if we should use fin>>ch to store the data is valid but 
                          //space is not recognize by fin>>ch; so we use get function 
    while( ! fin.eof()){
        cout<<ch;
        ch = fin.get();
    }
    return 0;
}