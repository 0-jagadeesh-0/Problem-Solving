#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<int> graph[], int u, int v)
{
    graph[u].push_back(v);
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
    return 0;
}