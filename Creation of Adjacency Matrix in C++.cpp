#include <iostream>
#include <vector>

using namespace std;

int main() {
    int vertices, edges;

    // Input the number of vertices and edges
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    cout << "Enter the number of edges: ";
    cin >> edges;

    // Initialize adjacency matrix with zeros
    vector<vector<int>> adjMatrix(vertices, vector<int>(vertices, 0));

    cout << "Enter the edges (format: u v for an edge between u and v):\n";
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;

        // Add edge to the matrix
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; // Remove this line for a directed graph
    }

    // Display the adjacency matrix
    cout << "\nAdjacency Matrix:\n";
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
