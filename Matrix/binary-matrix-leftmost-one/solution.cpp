int solve(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    if (n == 0)
    {
        return -1;
    }
    int m = matrix[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[j][i] == 1)
            {
                return i;
            }
        }
    }
    return -1;
}