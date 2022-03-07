#include<iostream>
using namespace std;
int add(int x=0,int y=0,int z=0)
{
    return(x+y+z);
}
int main()
{
    int a,b,c;
    cout<<"Enter two number:";
    cin>>a>>b;
    cout<<"sum is:"<<add(a,b)<<endl; //third argument is passed zero because we initialized it 0 on function decleration
    cout<<"enter three number:";
    cin>>a>>b>>c;
    cout<<"sum is:"<<add(a,b,c);
    return 0;
}