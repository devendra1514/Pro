#include <iostream>
#include <vector>
#include <algorithm>
// #include <algorithm>

using namespace std;

int main() {
    vector<int>arr;
    vector<int>cost_arr;

    int t_list;
    cout << "Enter Total Lists : ";
    cin >> t_list;

    for(int i = 0; i < t_list; i++) {
        int data;
        cout << "Enter " << i+1 << " list Size : ";
        cin >> data;
        arr.push_back(data);        
    }

    for(int i = 0; i < arr.size() -1; ) {

        int min1 = *min_element(arr.begin(), arr.end());
        arr.erase(min_element(arr.begin(), arr.end()));
        int min2 = *min_element(arr.begin(), arr.end());
        arr.erase(min_element(arr.begin(), arr.end()));

        arr.push_back(min1 + min2);

        cost_arr.push_back(min1 + min2);
    }
    int total_cost = 0;

    for(int i = 0; i < cost_arr.size(); i++) {

        total_cost = total_cost + cost_arr[i];
    }
    cout << "Total Coast : " << total_cost;
    return 0;
}