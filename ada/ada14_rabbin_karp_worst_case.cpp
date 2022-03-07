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

void rabbinKarpWorstCase(string str, string pattern) {
    int sumOfPattern = 0;
    int sumOfString = 0;

    for(int i = 0; i < pattern.length(); i++) {
        sumOfPattern = sumOfPattern + (int)pattern[i];
    }
    
    bool isMatch = false;

    for(int i = 0;i <= str.length() - pattern.length(); i++) {

        for(int j = i; j < i+pattern.length(); j++) {

            sumOfString = sumOfString + (int)str[j];
        }
        if(sumOfPattern == sumOfString) {  //if both of sum is same then check pattern in the string

            if(checkMatch(str, pattern, i)) {

                cout << "Match at Index : " << i << "\n";
                isMatch = true;
            }
        }
        sumOfString = 0;
    }
    if(!isMatch) {
        cout << "Not Matching";
    }
}

int calculateHashCode(string str, int start, int end) {
    long long int sum = 0;
    int round = end - start;
    for(int i = start, k = 0; i < end; i++, k++) {
        sum = sum + (int)str[i] * pow(127, round-k-1);
    }
    return sum % 100;
}

void rabbinKarp(string str, string pattern) {
    int patternSum = 0;

    patternSum = calculateHashCode(pattern, 0, pattern.length());

    cout << patternSum << "\n";

    int i = 0;
    int stringSum = 0;
    bool isMatch = false;

    while(i <= str.length() - pattern.length()) {

        stringSum = calculateHashCode(str, i, i + pattern.length());

        // cout << stringSum << "\n" ;

        if(patternSum == stringSum) {

            if(checkMatch(str, pattern, i)) {

                cout << "Match at Index : " << i << "\n";
                isMatch = true;
            }
        }
        stringSum = 0;
        i++;
    }
    if(!isMatch) {
        cout << "Not Matching";
    }
}

int main() {
    string pattern, str;
    cout << "Enter A Pattern to Search : ";
    cin >> pattern;
    cout << "Enter A String : ";
    cin >> str;

    rabbinKarpWorstCase(str, pattern);
    rabbinKarp(str, pattern);
    return 0;
}