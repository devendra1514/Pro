#include <iostream>
using namespace std;

template <typename type>       //we can write "class" it the place of "typename"
class Array {

    private: 
        type *arr;
        int size;

    public:
        Array(int size) {
            
            this->size = size;
            arr = new type[this->size];
        }
        void setArray() {
            
            cout << "Enter " << this->size << " element : \n";
            for(int i = 0; i < this->size; i++) {
                
                cin>>arr[i];
            }
        }
        void printArray() {
            
            cout << "\n";
            for(int i = 0; i < this->size; i++) {

                cout << arr[i] << " ";
            }
            cout << "\n";
        }
        void sortArray() {

            for(int i = 0; i < size; i++) {

                for(int j = 0; j < this->size - 1 - i; j++) {

                    if(arr[j] > arr[j + 1]) {
                        
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
        }
        type sumArray() {

            type sum = 0;
            for(int i = 0; i < this->size; i++) {

                sum = sum + arr[i];
            }
            return sum;
        }
};

int main() {

    Array<float> a(7);
    a.setArray();
    a.printArray();
    cout << "Sorted Array : ";
    a.sortArray();
    a.printArray();
    cout << "Sum : " << a.sumArray();
    return 0;
}