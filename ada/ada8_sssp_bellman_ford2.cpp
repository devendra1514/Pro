#include <iostream>
#define INF INT_MAX
using namespace std;

struct Edges {
	int src, dest, weight;
};

struct Graph {
	int v, e;
	Edges *edge;
};

Graph* createGraph(int v, int e) {
	Graph* graph;
	graph->v = v;
	graph->e = e;
	graph->edge = (Edges*) malloc (sizeof(Edges) * e);
	return graph;
}

void BellmanFord(Graph* graph, int source) {
	int d[graph->v];
	for (int i = 0; i < graph->v; i++)
        d[i] = INT_MAX;
    d[source] = 0;

	for(int i = 0; i < graph->v; i++) {
		for(int j = 0; j < graph->e; j++) {
			int u = graph->edge[j].src;
			int v = graph->edge[j].dest;
			int weight = graph->edge[j].weight;
			if(d[u] + weight < d[v]) {
				d[v] = d[u] + weight;
			}
		}
	}
	cout << "Distance between Source to Vertex : \n";

	for(int i = 0; i < graph->v; i++) {
		cout << i << "  " << d[i] << "\n";
	}
}

int main() {
	int vertex, edge;
	cout << "Enter Total Vertex : ";
	cin >> vertex;
	cout << "Enter Total Edge : ";
	cin >> edge;
	Graph *graph = createGraph(vertex, edge);

	for(int i = 0; i < edge; i++) {
		cout << "Enter Source Vertex Of Edge " << i+1 << " : ";
		cin >> graph->edge[i].src;
		cout << "Enter Destination Vertex of Edge " << i+1 << " : ";
		cin >> graph->edge[i].dest;
		cout << "Enter " << i+1 << " Edge Weight : ";
		cin >> graph->edge[i].weight;
	}
	// cout << "Vertex To Vertex : Weight\n";
	// for(int i = 0; i < edge; i++) {
	// 	cout << graph->edge[i].src << "     " << graph->edge[i].dest << 
	// 			"     " << graph->edge[i].weight << "\n";
	// }
	BellmanFord(graph, 0);
	return 0;
}