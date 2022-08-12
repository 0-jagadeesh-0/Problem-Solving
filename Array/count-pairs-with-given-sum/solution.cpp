#include <bits/stdc++.h>

using namespace std;

int getPairsCount(int arr[], int n, int k)
{
    map<int, int> m;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (m[k - arr[i]] > 0)
        {
            ans += m[k - arr[i]];
        }

        m[arr[i]]++;
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << getPairsCount(arr, n, k);
    return 0;
}