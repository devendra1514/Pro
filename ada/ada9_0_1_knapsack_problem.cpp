#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int m = 8;
    int p[n+1] = {0,1,2,5,6};
    int wt[n+1] = {0,2,3,4,5};
    int k[n+1][m+1];
    
    for(int i = 0; i <= n; i++) {
        for(int w = 0; w <= m; w++) {
            if(i == 0 || w == 0) {
                k[i][w] = 0;
            }
            else if(wt[i] <= w) {
                k[i][w] = max(p[i] + k[i-1][w-wt[i]] , k[i-1][w]);
            }
            else {
                k[i][w] = k[i-1][w];
            }
        }
    }
    // for(int i = 0; i <= n; i++) {
    //     for(int w = 0; w <= m; w++) {
    //         cout << k[i][w] << " ";
    //     }
    //     cout << "\n";
    // }
    cout << "\nTotal Weight : " << k[n][m] << "\n";
    for(int i = n, j = m; i > 0 && j >= 0;) {
        if(k[i][j] == k[i-1][j]) {
            cout << i << "  0\n";
            i--;
        }
        else {
            cout << i << "  1\n";
            j = j - wt[i];
            i--;
        }
    }
    return 0;
}