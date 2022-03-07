#include <iostream>
#include <vector>
#include <algorithm>
#define INF INT_MAX
using namespace std;

int main() {
    int t_node;
    cout << "Enter Totol Nodes : ";
    cin >> t_node;

    int graph[t_node][t_node] = {0};

    cout << "Enter 1 if they are connected otherwise enter 0\n";
    for(int i = 0; i < t_node; i++) {
        for(int j = 0; j < t_node; j++) {
            cout << i+1 << " to " << j+1 << " are connected : ";
            cin >> graph[i][j];
        }
    } 
    for(int i = 0; i < t_node; i++) {
        for(int j = 0; j < t_node; j++) {
            cout << graph[i][j] << " ";
        }
        cout << "\n";
    }
    vector<int> vec_arr;

    int VISITED[t_node] = {0};
    cout << "\nGraph Element using DFS : \n";
    int i = 0;
    int k = 0;
    while(i < t_node) {
        int j = 1;
        while(j < t_node) {
            if(graph[i][j] == 1 && VISITED[j] == 0) {
                vec_arr.push_back(i);
                VISITED[i] == 1;
                i = j;
            }
            j++;
        }
        if(j == t_node) {
            VISITED[i] = 1;
            cout << i+1 << " ";
            i = *vec_arr.data();
            vec_arr.pop_back();
            k++;
        }
        if(k == t_node) {
            exit(1);
        }
    }

    return 0;
}