/* sum of two value is equal to target
  array = 4,2,6,5,3,4
  target = 6
  return = 0,1
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index;
        int i = 0;
        int j;
        while(i < nums.size()) {
            j = i+1;
            while(j < nums.size()) {
                if(nums[i] + nums[j] < target) {
                    j++;
                    continue;
                }
                else if(nums[i] + nums[j] == target) {
                    index.push_back(i);
                    index.push_back(j);
                    return index;
                }
                else {
                    break;
                }
                j++;
            }
            i++;
        }
        return index;
    }
};
int main() {
    Solution sol;
    int size;
    vector<int> vecArr;
    cout << "Enter Size of Array : ";
    cin >> size;
    cout << "Enter " << size << " Element : \n";
    for(int i = 0; i < size; i++) {
        int data;
        cin >> data;
        vecArr.push_back(data);
    }
    sort(vecArr.begin(), vecArr.end());

    vector<int>index = sol.twoSum(vecArr, 9);

    for(int i = 0; i < index.size(); i++) {
        cout << index[i] << " ";
    }
    return 0;
}