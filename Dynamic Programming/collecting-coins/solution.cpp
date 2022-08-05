#include <bits/stdc++.h>

using namespace std;

int solve(vector<vector<int>> &matrix, int n, int m)
{
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            dp[i][j] = max(matrix[i - 1][j - 1] + dp[i - 1][j], matrix[i - 1][j - 1] + dp[i][j - 1]);
        }
    }
    return dp[n][m];
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << solve(matrix, n, m) << endl;
    return 0;
}