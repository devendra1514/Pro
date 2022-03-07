#include<iostream>
using namespace std;
class Mobile {
    protected:
        string name;
        int ram,rom;
        static int countSet, countShow ;
    public:
        void setDetails(){
            countSet++;
            cout<<"\nEnter "<< countSet <<" Mobile details : "<<endl;
            cout<<">>>Enter Name : ";
            cin>>name;
            cout<<">>>Enter Ram : ";
            cin>>ram;
            cout<<">>>Enter Rom : ";
            cin>>rom;
        }
        void showDetails(){
            countShow++;
            cout<<endl<<countShow<<" Mobile Details : "<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Ram : "<<ram<<endl;
            cout<<"Rom : "<<rom<<endl;
        }
};
class NewMobile : protected Mobile {
    protected:
        float cpu;
    public:
        void setInfo(){
            setDetails();
            cout<<">>>Enter cpu speed in GHz : ";
            cin>>cpu;
        }
        void showInfo(){
            showDetails();
            cout<<"Your New Mobile cpu in GHz : "<<cpu<<endl;
        }
};
int Mobile :: countSet;
int Mobile :: countShow;
int main(){
    Mobile m1;
    NewMobile M1;
    m1.setDetails();
    M1.setInfo();
    m1.showDetails();
    M1.showInfo();
    return 0;
}