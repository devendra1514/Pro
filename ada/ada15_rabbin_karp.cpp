#include <iostream>
#include <math.h>
using namespace std;

bool checkMatch(string str, string pattern, int index) {

    bool isTrue = false;

    for(int i = index, j = 0; j < pattern.length(); i++, j++) {
        if(str[i] == pattern[j]) {
            isTrue = true;
        }
        else {
            isTrue = false;
            break;
        }
    }
    return isTrue;
}

void rabbinKarp(string str, string pattern) {

    if(str.length() < pattern.length()) {
        cout << "Not Matching";
    }
    else {
        long long int strCode = 0, patternCode = 0;
        int strHashCode, patternHashCode;
        
        for(int i = 0; i < pattern.length(); i++) {
            patternCode = patternCode + (int)pattern[i] * pow(127, pattern.length()-1-i);
        }
        for(int i = 0; i < pattern.length()-1; i++) {
            strCode = strCode + (int)str[i] * pow(127, pattern.length()-i-2);
        }
        patternHashCode = patternCode % 100;
        strHashCode = strCode % 100;
        // cout << patternHashCode << "\n";
        // cout << strHashCode << "\n";

        bool isTrue = false;
        long int temp = 0;
        for(int i = 0; i <= str.length() - pattern.length(); i++) {
            strCode = (strCode - temp) * 127 + (int)str[i+pattern.length()-1];
            strHashCode = strCode % 100;

            // cout << strHashCode << "\n";
            
            if(patternHashCode == strHashCode) {
                if(checkMatch(str, pattern, i)) {
                    cout << "Match at Index : " << i << "\n";
                    isTrue = true;
                }
            }
            temp = (int)str[i] * pow(127, pattern.length()-1);
        }
        if(!isTrue) {
            cout << "Not Matching";
        }
    }

}

int main() {
    string pattern, str;
    cout << "Enter A Pattern to Search : ";
    cin >> pattern;
    cout << "Enter A String : ";
    cin >> str;
    rabbinKarp(str, pattern);
    return 0;
}