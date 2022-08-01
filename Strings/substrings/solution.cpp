#include <bits/stdc++.h>
using namespace std;

void find(int i, int n, string s, unordered_set<string> &ans)
{
    string p = "";
    if (i == n)
    {
        return;
    }
    for (int j = i; j < n; j++)
    {
        p += s[j];
        ans.insert(p);
        find(j + 1, n, s, ans);
    }
}

void iterative(string s, int n, vector<string> &v)
{
    for (int i = 0; i < n; i++)
    {
        string t = "";
        for (int j = i; j < n; j++)
        {
            t += s[j];
            v.push_back(t);
        }
    }
}

int main()
{
    int n;
    string s;
    unordered_set<string> ans;
    cin >> n >> s;
    find(0, n, s, ans);
    cout << "---RECURSIVE---" << endl;
    for (auto i : ans)
    {
        cout << i << endl;
    }
    vector<string> sub;
    iterative(s, n, sub);
    cout << "---ITERATIVE---" << endl;
    for (auto i : sub)
    {
        cout << i << endl;
    }
}