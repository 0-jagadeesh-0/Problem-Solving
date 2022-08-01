#include <bits/stdc++.h>

using namespace std;

void solve(string s, int n, vector<bool> &visit, vector<string> &ans, string t)
{
    if (t.size() == n)
    {
        ans.push_back(t);
        return;
    }
    for (int j = 0; j < n; j++)
    {
        if (!visit[j])
        {
            visit[j] = true;
            solve(s, n, visit, ans, t + s[j]);
            visit[j] = false;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> ans;
    vector<bool> visit(n, false);
    solve(s, n, visit, ans, "");
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}