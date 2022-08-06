#include <bits/stdc++.h>

using namespace std;

int solve(string s)
{
    string t = s;
    int n = s.size();
    reverse(s.begin(), s.end());
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s[i - 1] == t[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n][n];
}

int main()
{
    string s;
    cin >> s;
    cout << solve(s);
    return 0;
}