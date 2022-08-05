#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &weights, vector<int> &values, int capacity)
{
    int n = weights.size();
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= capacity; j++)
        {
            if (weights[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(values[i - 1] + dp[i - 1][j - weights[i - 1]], dp[i - 1][j]);
            }
        }
    }
    return dp[n][capacity];
}

int main()
{
    int n;
    cin >> n;
    vector<int> values(n), weights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> values[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }
    int capacity;
    cin >> capacity;
    cout << solve(weights, values, capacity);
    return 0;
}