#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter Array Size : ";
    cin >> size;
    int *arr = new int[size];
    for(int i = 0; i < size; i++) {
        cout << "Enter " << i+1 << " Element : ";
        cin >> arr[i];
    }
    bool isSorted = true;
    for(int i = 0; i < size; i++) {
        isSorted = true;
        for(int j = 0; j < size-i-1;j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted = false;
            }
        }
        if(isSorted) {
            break;
        }
    }
    cout << "Value : How Many Time\n";
    for(int i = 0; i < size; ) {
        int data = arr[i];
        int count = 0;
        while(data == arr[i]) {
            i++;
            count++;
        }
        cout << data << "     " << count << "\n";
    }
    return 0;
}