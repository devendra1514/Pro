#include<iostream>
using namespace std;
void TOH(int n,char sr, char ax, char dt){
    if(n>=1){
        TOH(n-1,sr,dt,ax);
        cout<<"\nmove "<<n<<" from "<<sr<<" to "<<dt;
        TOH(n-1,ax,sr,dt);
    }
}
int main(){
    TOH(5,'A','B','C');
    return 0;
}