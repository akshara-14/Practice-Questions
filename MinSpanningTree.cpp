#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int INF = 1000000000;

struct Edge
{
    int to, weight;
    Edge(int t, int w) : to(t), weight(w) {}
};

struct Node
{
    int id, distance;
    Node(int i, int d) : id(i), distance(d) {}
    bool operator<(const Node &n) const { return distance > n.distance; }
};

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<Edge>> edges(n);
    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edges[a].push_back(Edge(b, w));
        edges[b].push_back(Edge(a, w));
    }

    priority_queue<Node> q;
    vector<bool> visited(n);
    vector<int> dist(n, INF);
    dist[0] = 0;
    q.push(Node(0, 0));

    int total_weight = 0;
    while (!q.empty())
    {
        Node n = q.top();
        q.pop();

        if (visited[n.id])
            continue;

        visited[n.id] = true;
        total_weight += n.distance;

        for (Edge e : edges[n.id])
        {
            if (dist[e.to] > e.weight)
            {
                dist[e.to] = e.weight;
                q.push(Node(e.to, e.weight));
            }
        }
    }

    cout << "Minimum spanning tree weight: " << total_weight << endl;
    return 0;
}
