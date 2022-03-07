#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> vec) {
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout<<"\n";
}

int main() {
    vector<int> vec;
    int size, value;
    // cout << "Enter the size : ";
    // cin >> size;

    // for(int i = 0; i < size; i++) {
    //     cin >> value;
    //     vec.push_back(value);
    // }

    vec = {5, 3, 1, 8, 3};
    cout << "Data : \n";
    print(vec);

    cout << "After One Pop : \n";

    vec.pop_back();
    print(vec);

    cout << "Insert At Specific Position : \n";
    vector<int> :: iterator iter = vec.begin();   //iter point the starting index of vec
    vec.insert(iter+2, 55);    // insert 55 three times from start
    print(vec);

    cout << "Element at index 4 : "<<vec.at(4) << "\n";

    cout << "Erase first element : \n";
    vec.erase(iter);
    print(vec);


    return 0;
}