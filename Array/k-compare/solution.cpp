int solve(vector<int> &a, vector<int> &b, int k)
{
    int n = a.size();
    int m = b.size();
    if (m == 0 || k == 0)
    {
        return n;
    }
    sort(b.rbegin(), b.rend());
    int key = b[k - 1];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < key)
        {
            ans++;
        }
    }
    return ans;
}