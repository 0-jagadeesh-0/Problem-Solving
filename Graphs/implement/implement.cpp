#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<int> graph[], int u, int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void printGraph(vector<int> graph[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << graph[i][j] << "->";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> graph[n];
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
    printGraph(graph, n);
    return 0;
}