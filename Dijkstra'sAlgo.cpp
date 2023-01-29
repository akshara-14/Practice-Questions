#include <bits/stdc++.h>
using namespace std;

#define MAX 100
#define INF INT_MAX

int n, m, dist[MAX], prev[MAX], graph[MAX][MAX];
bool visited[MAX];

void Dijkstra(int start)
{
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INF;
        visited[i] = false;
    }
    dist[start] = 0;

    for (int i = 1; i <= n; i++)
    {
        int u = -1, minDist = INF;
        for (int j = 1; j <= n; j++)
        {
            if (!visited[j] && dist[j] < minDist)
            {
                u = j;
                minDist = dist[j];
            }
        }

        if (u == -1)
            return;
        visited[u] = true;

        for (int v = 1; v <= n; v++)
        {
            if (graph[u][v] && !visited[v])
            {
                if (dist[u] + graph[u][v] < dist[v])
                {
                    dist[v] = dist[u] + graph[u][v];
                    prev[v] = u;
                }
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        graph[x][y] = w;
    }
    // int graph[9][9] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
    //                    {4, 0, 8, 0, 0, 0, 0, 11, 0},
    //                    {0, 8, 0, 7, 0, 4, 0, 0, 2},
    //                    {0, 0, 7, 0, 9, 14, 0, 0, 0},
    //                    {0, 0, 0, 9, 0, 10, 0, 0, 0},
    //                    {0, 0, 4, 14, 10, 0, 2, 0, 0},
    //                    {0, 0, 0, 0, 0, 2, 0, 1, 6},
    //                    {8, 11, 0, 0, 0, 0, 1, 0, 7},
    //                    {0, 0, 2, 0, 0, 0, 6, 7, 0}};

    int start;
    cin >> start;
    Dijkstra(0);

    for (int i = 1; i <= n; i++)
    {
        cout << dist[i] << " ";
    }

    return 0;
}
