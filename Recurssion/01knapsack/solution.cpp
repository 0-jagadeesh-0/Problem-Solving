#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> values, vector<int> weights, int capacity, int i)
{
    if (capacity == 0 || i == values.size())
    {
        return 0;
    }
    if (weights[i] > capacity)
    {
        return solve(values, weights, capacity, i + 1);
    }
    return max(values[i] + solve(values, weights, capacity - weights[i], i + 1), solve(values, weights, capacity, i + 1));
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
    cout << solve(values, weights, capacity, 0);
    return 0;
}