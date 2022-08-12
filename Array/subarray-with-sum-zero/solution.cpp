#include <bits/stdc++.h>

using namespace std;

bool subArrayExists(int arr[], int n)
{
    int sum = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (m[sum] > 0 || sum == 0)
        {
            return true;
        }
        else
        {
            m[sum]++;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << subArrayExists(arr, n);
    return 0;
}