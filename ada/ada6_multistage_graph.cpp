#include <iostream>
using namespace std;

int main() {
    int t_node, t_stage;
    cout << "Enter the Total Nodes : ";
    cin >> t_node;
    cout << "Enter Total Stage : ";
    cin >> t_stage;

    int cost[t_node], d[t_node], path[t_stage] = {0};

    int c[t_node+1][t_node+1];
    for(int i = 0; i < t_node; i++) {
        for(int j = 0; j < t_node; j++) {
            cout << "Enter Distance Between " << i+1 << " to " << j+1 << " : ";
            cin >> c[i][j];
        }
    }
    cost[t_node] = 0;
    for(int i = t_node; i >= 1; i--) {
        int min = 999999999;
        for(int j = i + 1; j <= t_node; j++) {
            if(c[i][j] != 0 && c[i][j]+cost[j] < min) {
                min = c[i][j] + cost[j];
                d[i] = j;
            }
        }
        cost[i] = min;
    }
    path[0] = 1;
    path[t_stage-1] = t_node;
    for(int i = 1; i < t_stage-1; i++) {
        path[i] = d[path[i-1]];
    }
    for(int i = 1; i < t_stage; i++) {
        cout << path[i] << "\n";
    }
    return 0;
}