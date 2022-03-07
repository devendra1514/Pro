#include <iostream>
using namespace std;

//Array store the value of fibonacci at every index so then after they call they return value
int *fib_index_value;

int fibSeries(int n) {
    if(fib_index_value[n] != -1) {
        return fib_index_value[n];
    }
    fib_index_value [n] = (fibSeries(n - 1) + fibSeries(n - 2));
    return fib_index_value[n];
}

int main() {
    int fib_index;
    cout << "Enter nth term of fibonacci series : " ;
    cin >> fib_index;

    if(fib_index < 0) {
        cout << "You Entered Wrong term ";
    }
    else {
        fib_index_value = new int[fib_index + 1];

        for(int i = 0; i <= fib_index; i++) {
            fib_index_value[i] = -1;
        }

        fib_index_value[0] = 0;
        fib_index_value[1] = fib_index_value[2] = 1;
        fib_index_value[fib_index] = fibSeries(fib_index);

        cout << "\n Fib Value : " << fib_index_value[fib_index];

    }
    return 0;
}