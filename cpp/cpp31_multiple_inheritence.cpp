#include<iostream>
using namespace std;
class cricketBatsman {
    protected:
        int batsman;
    public:
        void setBatsman() {
            cout<<"Enter number of batsman : ";
            cin>>batsman;
        }
        void showBatsman() {
            cout<<endl<<"Batsman : "<<batsman<<endl;
        }
};
class cricketBowlers {
    protected:
        int bowlers;
    public:
        void setBowlers() {
            cout<<"Enter number of bowlers : ";
            cin>>bowlers;
        }
        void showBowlers() {
            cout<<"Bowlers : "<<bowlers<<endl;
        }
};
class cricketPlayers : protected cricketBatsman, protected cricketBowlers {
    private:
        int all_rounders;
        int wicket_keeper;
    public:
        void setPlayers() {
            setBatsman();
            setBowlers();
            cout<<"Enter number of all rounders : ";
            cin>>all_rounders;
            cout<<"Enter number of wicket keeper : ";
            cin>>wicket_keeper;
        }
        void showPlayers() {
            showBatsman();
            showBowlers();
            cout<<"All rounders : "<<all_rounders<<endl;
            cout<<"Wicket keeper : "<<wicket_keeper<<endl;
        }
};

int main() {
    cricketPlayers c1;
    c1.setPlayers();
    c1.showPlayers();
    return 0;
}