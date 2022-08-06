#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &nums, int k)
{
    int n = nums.size();
    int mod = 1e9 + 7;
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
    for (int i = 0; i <= k; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (nums[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j] % mod;
            }
            else
            {
                dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - nums[i - 1]]) % mod;
            }
        }
    }
    return dp[n][k];
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cin >> k;
    cout << solve(v, k);
    return 0;
}