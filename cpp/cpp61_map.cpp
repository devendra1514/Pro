#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> myMap;
    myMap["Raju"] = 56;
    myMap["Kaju"] = 70;
    myMap["Shayam"] = 47;
    myMap["Bablu"] = 84;

    myMap.insert({"Babu Rao", 99});

    for( map<string, int> :: iterator iter = myMap.begin(); iter != myMap.end(); iter++) {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }


    return 0;
}