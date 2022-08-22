#include <bits/stdc++.h>

using namespace std;

bool dfs(int node, int parent, vector<int> graph[], vector<bool> &visit)
{
    visit[node] = true;
    for (auto j : graph[node])
    {
        if (!visit[j])
        {
            if (dfs(j, node, graph, visit))
            {
                return true;
            }
        }
        else if (parent != j)
        {
            return true;
        }
    }
    return false;
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
    addEdge(graph, 1, 0);
    addEdge(graph, 0, 2);
    addEdge(graph, 2, 1);
    addEdge(graph, 0, 3);
    addEdge(graph, 3, 4);
    vector<bool> visit(n, false);
    for (int i = 0; i < n; i++)
    {
        if (!visit[i])
        {
            if (dfs(i, -1, graph, visit))
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}