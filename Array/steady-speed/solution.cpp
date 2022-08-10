int solve(vector<int> &positions)
{
    int n = positions.size();
    int c = 1;
    int ans = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        positions[i] = abs(positions[i] - positions[i + 1]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (positions[i] == positions[i + 1])
        {
            c++;
        }
        else
        {
            ans = max(ans, c);
            c = 1;
        }
    }
    return ans + 1;
}