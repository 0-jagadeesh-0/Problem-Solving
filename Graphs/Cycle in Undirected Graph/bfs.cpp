#include <bits/stdc++.h>

using namespace std;

// bool isCycle(int i, vector<int> graph[], vector<bool> &visit)
// {
// }

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
    // addEdge(graph, 0, 1);
    // addEdge(graph, 1, 2);
    vector<bool> visit(n, false);
    for (int i = 0; i < n; i++)
    {
        if (!visit[i])
        {
            queue<pair<int, int>> q;
            visit[i] = true;
            q.push({i, -1});
            while (!q.empty())
            {
                int node = q.front().first;
                int parent = q.front().second;
                q.pop();
                for (auto j : graph[node])
                {
                    if (!visit[j])
                    {
                        visit[j] = true;
                        q.push({j, node});
                    }
                    else if (parent != j)
                    {
                        cout << "Yes";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No";
    return 0;
}