#include <iostream>
#define INF 99999999
using namespace std;

int main() {
    int t_node;
    cout << "Enter Total Node : ";
    cin >> t_node;

    int graph_arr[t_node][t_node] = {INF};
    for(int i = 0; i < t_node; i++) {
        for (int j = 0; j < t_node; j++)
        {
            cout << "Enter Distance Between " << i+1 << " to " << j+1 << " : ";
            cin >> graph_arr[i][j];
        }
    }
    for(int k = 0; k < t_node; k++) {
        for(int i = 0; i < t_node; i++) {
            for (int j = 0; j < t_node; j++) {
                if(graph_arr[i][j] > graph_arr[i][k] + graph_arr[k][j]) {
                    graph_arr[i][j] = graph_arr[i][k] + graph_arr[k][j];
                }
            }
        }
    }
    for(int i = 0; i < t_node; i++) {
        for (int j = 0; j < t_node; j++){
            cout << graph_arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}