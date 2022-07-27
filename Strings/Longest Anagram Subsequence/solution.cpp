int solve(string a, string b)
{
    unordered_map<char, int> m;
    int ans = 0;
    for (auto i : a)
        m[i]++;
    for (int i = 0; i < b.size(); i++)
    {
        if (m[b[i]] > 1)
        {
            ans++;
            m[b[i]]--;
        }
        else if (m[b[i]] == 1)
        {
            ans++;
            m.erase(b[i]);
        }
    }
    return ans;
}