#include <iostream>
using namespace std;

namespace MySpace {

    int num1, num2;
}

namespace MySpace2 {

    int num1, num2;
}

using namespace MySpace;

int main() {

    num1 = 4;
    cout << num1;

    cout << MySpace2::num1;

    return 0;
}