int solve(vector<int> &nums)
{
    int k = nums.size();
    if (k == 1)
        return 1;
    unordered_map<int, int> m;
    for (auto i : nums)
        m[i]++;
    k = k % 2 == 0 ? k / 2 : (k / 2) + 1;
    priority_queue<int> q;
    for (auto i : m)
        q.push(i.second);
    int c = 0;
    while (!q.empty())
    {
        if (q.top() < k)
        {
            k -= q.top();
            c++;
        }
        else
        {
            c++;
            break;
        }
        q.pop();
    }
    return c;
}