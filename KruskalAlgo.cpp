#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Data structure to store edges of the graph
struct Edge
{
    int src, dest, weight;
};

// comparator function to sort edges by increasing weight
bool comp(Edge e1, Edge e2)
{
    return e1.weight < e2.weight;
}

// Union-Find data structure to keep track of connected components
int find(int *parent, int x)
{
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent, parent[x]);
}

void Union(int *parent, int x, int y)
{
    int xSet = find(parent, x);
    int ySet = find(parent, y);
    parent[xSet] = ySet;
}

// Function to find the minimum spanning tree using Kruskal's algorithm
vector<Edge> Kruskal(int V, vector<Edge> edges)
{
    sort(edges.begin(), edges.end(), comp); // sort edges by increasing weight
    vector<Edge> mst;
    int *parent = new int[V];
    for (int i = 0; i < V; i++)
        parent[i] = i;
    int count = 0;
    for (Edge e : edges)
    {
        int x = find(parent, e.src);
        int y = find(parent, e.dest);
        if (x != y)
        {
            mst.push_back(e);
            Union(parent, x, y);
            count++;
            if (count == V - 1)
                break;
        }
    }
    return mst;
}

int main()
{
    int V = 4, E = 5; // Number of vertices and edges
    vector<Edge> edges = {{0, 1, 10}, {0, 2, 6}, {0, 3, 5}, {1, 3, 15}, {2, 3, 4}};
    vector<Edge> mst = Kruskal(V, edges);
    for (Edge e : mst)
    {
        cout << e.src << " - " << e.dest << " : " << e.weight << endl;
    }
    return 0;
}
