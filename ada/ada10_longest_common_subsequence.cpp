#include <iostream>
using namespace std;

int LCS(string str1, string str2, int i, int j) {
	if(str1[i] == '\0' || str2[j] == '\0') {
		return 0;
	}
	else if(str1[i] == str2[j]) {
		return 1 + LCS(str1, str2, i+1, j+1);
	}
	else {
		return max(LCS(str1, str2, i+1,j), LCS(str1, str2, i, j+1));
	}
}

int main() {
	string str1, str2;
	cout << "Enter first String : ";
	cin >> str1;
	cout << "Enter Second String : ";
	cin >> str2;
	cout << LCS(str1, str2, 0, 0);
	return 0;
}