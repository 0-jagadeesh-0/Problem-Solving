#include <bits/stdc++.h>

using namespace std;

vector<string> winner(string arr[], int n)
{
    unordered_map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    vector<string> ans;
    int maxi = INT_MIN;
    for (auto i : m)
    {
        if (maxi <= i.second)
        {
            if (maxi == i.second)
            {
                if (ans[0] > i.first)
                {
                    ans[0] = i.first;
                }
            }
            else
            {
                string s = to_string(i.second);
                ans = {i.first, s};
                maxi = i.second;
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector<string> v = winner(s, n);

    return 0;
}