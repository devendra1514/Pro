#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string str;
    ofstream fout;
    fout.open("cpp46.dat", ios::app);
    cout<<"Enter something : ";
    
    getline(cin, str);              //we don't use cin because cin can't write space in file.

    // char str[50];
    // gets(str);      //this code is work if varible is not a string type

    fout<<str;
    fout.close();
    return 0;
}