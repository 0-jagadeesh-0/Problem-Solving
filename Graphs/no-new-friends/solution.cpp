#include <bits/stdc++.h>

using namespace std;

bool solve(int n, vector<vector<int>> &friends)
{
    unordered_set<int> s;
    for (auto i : friends)
    {
        s.insert(i[0]);
        s.insert(i[1]);
    }
    return s.size() == n;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(m, vector<int>(2, 0));
    for (int i = 0; i < m; i++)
    {
        cin >> v[i][0] >> v[i][1];
    }
    cout << solve(n, v);
    return 0;
}