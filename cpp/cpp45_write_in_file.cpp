#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;          //fout is a object 
    fout.open("cpp45.txt");  //fout call its member function
    fout<<"Hello world";
    fout.close();         //fout call close fuction to close object
    return 0;
}