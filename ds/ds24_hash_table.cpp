#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cout << "Enter Total Element : ";
    cin >> size;
    cout << "Enter " << size << " Element  : ";
    vector<int> vecArr;

    for(int i = 0; i < size; i++) {
        int data;
        cin >> data;
        vecArr.push_back(data);
    }

    int maxValue = *max_element(vecArr.begin(), vecArr.end());
    int *arr = new int[maxValue+1]{-1};

    for(int i = 0; i < size; i++) {
        arr[vecArr[i]] = vecArr[i];
    }
    for(int i = 0; i <= maxValue; i++) {
        cout << arr[i] << ", ";
    }
    return 0;
}