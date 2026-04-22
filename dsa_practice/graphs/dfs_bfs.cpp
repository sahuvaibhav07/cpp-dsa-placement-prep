#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph
{
public:
    int vertices;
    vector<int> *adjList;

    Graph(int v)
    {
        vertices = v;
        adjList = new vector<int>[v];
    }

    void addEdge(int u, int v)
    {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void dfs(int node, vector<bool> &visited)
    {
        visited[node] = true;
        cout << node << " ";
        for (int neighbor : adjList[node])
        {
            if (!visited[neighbor])
            {
                dfs(neighbor, visited);
            }
        }
    }

    void bfs(int start)
    {
        vector<bool> visited(vertices, false);
        queue<int> q;
        q.push(start);
        visited[start] = true;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (int neighbor : adjList[node])
            {
                if (!visited[neighbor])
                {
                    q.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
    }
};

int main()
{
    cout << "=== Graph DFS and BFS ===\n";

    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    vector<bool> visited(5, false);

    cout << "DFS (starting from 0): ";
    g.dfs(0, visited);
    cout << "\n";

    cout << "BFS (starting from 0): ";
    g.bfs(0);
    cout << "\n";

    return 0;
}
