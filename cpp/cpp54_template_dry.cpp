#include <iostream>
#include <string.h>
using namespace std;

template <class type>
void sort(type * arr, type size) {

    for(int i = 0; i < size; i++) {

        for(int j = 0; j < size - 1 - i; j++) {

            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <class type>
void printArray(type *arr, type size) {

    cout<<"Your Array : ";
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";    
    }
}

int main() {

    int size;
    cout << "Enter Size : ";
    cin >> size;
    int choice = 1;
    cout << "Which type of array you crate : \n";
    cout << "1. Integer\n";
    cout << "2. Float\n";
    cout << "3. Char\n";
    cout << "Input : ";
    cin >> choice;

            int *i_arr = (int *) malloc (sizeof(int) * size);
            float *f_arr = (float *) malloc (sizeof(float) * size);
            char *c_arr = (char *) malloc (sizeof(char) * size);
    switch (choice) {

        case 1:


            cout << "\nEnter " << size << " element : ";

            for(int i = 0; i < size; i++) {
                cin>>i_arr[i];
            }

            sort <int> (i_arr, size);

            printArray <int> (i_arr, size);

            break;
        
        case 2:


            cout << "\nEnter " << size << " element : ";

            for(int i = 0; i < size; i++) {
                cin>>f_arr[i];
            }

            sort <float> (f_arr, size);

            printArray <float> (f_arr, size);

            break;

        case 3:


            cout << "\nEnter " << size << " element : ";

            for(int i = 0; i < size; i++) {
                cin>>c_arr[i];
            }

            sort <char> (c_arr, size);

            printArray <char> (c_arr, size);

            break;
    }
    return 0;
}