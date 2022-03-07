#include <iostream>
using namespace std;
float interest(float p, float r=4) {
    return(p+((p*r)/100));
}
int main() {
    float money;
    cout<<"Enter amount : ";
    cin>>money;
    cout<<"you received : "<<interest(money)<<endl;
    cout<<"you received : "<<interest(money, 6)<<endl;
    return 0;
}