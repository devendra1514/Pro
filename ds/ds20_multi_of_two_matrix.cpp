#include <iostream>
using namespace std;

int main() {
    int mat1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int mat2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int multi[3][3] {0};

    for(int i = 0; i < 3; i++) {
        
        for(int j = 0; j < 3; j++) {

            cout << multi[i][j] <<",";
        }
        
        cout << "\n";
    }

    for(int i = 0; i < 3; i++) {
        
        for(int j = 0; j < 3; j++) {

            for(int k = 0; k < 3; k++) {

                multi[i][j] = multi[i][j] + mat1[i][k] * mat2[k][j];
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        
        for(int j = 0; j < 3; j++) {

            cout << multi[i][j] <<",";
        }
        
        cout << "\n";
    }
    return 0;
}