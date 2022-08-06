#include <bits/stdc++.h>

using namespace std;

int solve(string s0, string s1)
{
    int n = s0.size();
    int m = s1.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s0[i - 1] == s1[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                ans = max(ans, dp[i][j]);
            }
        }
    }
    return ans;
}

int main()
{
    string s, t;
    cin >> s >> t;
    cout << solve(s, t);
    return 0;
}