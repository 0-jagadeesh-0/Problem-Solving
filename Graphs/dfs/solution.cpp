#include <bits/stdc++.h>

using namespace std;

void dfs(vector<int> graph[], vector<bool> &visit)
{
    int n = graph->size();

    for (int i = 0; i < n; i++)
    {
        if (!visit[i])
        {
            visit[i] = true;
            for (auto j : graph[i])
            {
                cout << j << " ";
                dfs(graph, visit);
            }
        }
    }
}

void addEdge(vector<int> graph[], int u, int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}

int main()
{
    int n;
    cin >> n;
    vector<int> graph[n];
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 3);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 4);
    addEdge(graph, 4, 5);
    vector<bool> visit(n, false);
    dfs(graph, visit);

    return 0;
}