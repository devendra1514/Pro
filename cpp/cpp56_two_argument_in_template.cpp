#include <iostream>
using namespace std;

template <typename type1, typename type2>
class TwoDataType {

    private:
        type1 t1;
        type2 t2;

    public:
        TwoDataType(type1 t1, type2 t2) {

            this->t1 = t1;
            this->t2 = t2;
        }
        void printData() {

            cout << t1 << " " << t2 << "\n";
        }
};

int main() {

    TwoDataType<char, int> c_i('d', 3);
    c_i.printData();
    
    TwoDataType<char, float> c_f('e', 3.3);
    c_f.printData();

    TwoDataType<int, float> i_f(95, 1514);
    i_f.printData();
    return 0;
}