#include <iostream>
#include <vector>
using namespace std;

vector<int> calculatePattern(string pattern) {
    vector<int> patAvail;
    patAvail.push_back(-1);
    int i = 0;
    int j = 1;
    while(j < pattern.length()) {
        if(pattern[j] == pattern[i]) {
            patAvail.push_back(i);
            i++;
        }
        else {
            patAvail.push_back(-1);
            i = 0;
        }
        j++;
    }
    return patAvail;
}

void findPattern(string str, string pattern, vector<int> patAvail) {
    int k;
    int i = 0;
    int j = -1;
    bool isMatch = false;
    while(i < str.length()) {
        if(str[i] == pattern[j+1]) {
            k = i;
            i++, j++;
        }
        else {
            if(j == -1) {
                i++;
            }
            else {
                j = patAvail[j];
                if(j == -1) {
                    i++;
                }
                else {
                    if(str[i] == pattern[j+1]) {
                        k = i;
                        i++, j++;
                    }
                    else {
                        j = patAvail[j];
                    }
                }
            }
        }
        if(j == pattern.length()-1) {
            cout << "Match in Index " << k-(pattern.length()-1) << "\n";
            j = -1;
            isMatch = true;
        }
    }
    if(!isMatch) {
        cout << "Not Match";
    }
}

int main() {
    string pattern, str;
    cout << "Enter A Pattern to Search : ";
    cin >> pattern;
    cout << "Enter A String : ";
    cin >> str;
    vector<int> patAvail = calculatePattern(pattern);

    // for(vector<int> :: iterator iter = patAvail.begin(); iter != patAvail.end(); iter++) {
    //     cout << *iter << "  ";
    // }

    findPattern(str, pattern, patAvail);
    return 0;
}