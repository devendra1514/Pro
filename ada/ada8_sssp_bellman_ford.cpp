#include <iostream>
#define INF 9999999
using namespace std;

int main() {
    int num = 7;

    int graph[num+1][num+1] = {{INF,INF,INF,INF,INF,INF,INF,INF},
                                {INF,0,6,5,5,INF,INF,INF},
                                {INF,INF,0,INF,INF,-1,INF,INF},
                                {INF,INF,-2,0,INF,1,INF,INF},
                                {INF,INF,INF,-2,0,INF,-1,INF},
                                {INF,INF,INF,INF,INF,0,INF,3},
                                {INF,INF,INF,INF,INF,INF,0,3},
                                {INF,INF,INF,INF,INF,INF,INF,0}};

    int d[num+1] = {INF,0,INF,INF,INF,INF,INF,INF};
    for(int k = 1; k < num; k++) {
        for(int i = 1; i < num; i++) {
            for(int j = 2; j <= num; j++) {
                if(d[i] + graph[i][j] < d[j]) {
                    d[j] = d[i] + graph[i][j];
                    // cout << d[j] << " ";
                }
            }
        }
    }
    cout << "Vertex " << "   Distance From Source\n";
    for(int i = 2; i <= num; i++) {
        cout << i << "         " << d[i] << "\n";
    }
    return 0;
}