#include <iostream>
#include <list>
using namespace std;

int main() {
    
    list<int> node;
    node.push_back(5);
    node.push_back(5);
    node.push_front(1);
    cout << node.front() << "\n";
    cout << node.size() << "\n";
    node.unique();
    cout << node.size();
    return 0;
}