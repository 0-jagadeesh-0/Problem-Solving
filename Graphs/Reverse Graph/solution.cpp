vector<vector<int>> solve(vector<vector<int>> &graph)
{

    int n = graph.size();
    vector<vector<int>> ans(n, vector<int>(NULL));
    for (int i = 0; i < n; i++)
    {
        int m = graph[i].size();

        for (int j = 0; j < m; j++)
        {
            ans[graph[i][j]].push_back(i);
        }
    }
    return ans;
}