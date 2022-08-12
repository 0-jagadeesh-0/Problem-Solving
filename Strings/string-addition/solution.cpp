#include <bits/stdc++.h>

using namespace std;

string solve(string a, string b)
{
    int carry = 0;
    int n = a.size();
    int m = b.size();
    int i = n - 1, j = m - 1;
    string ans = "";
    while (i >= 0 && j >= 0)
    {
        int k = carry + (a[i] - '0') + (b[j] - '0');
        carry = k / 10;
        ans += (char)((k % 10) + '0');
        i--;
        j--;
    }
    while (i >= 0)
    {
        int k = carry + (a[i] - '0');
        carry = k / 10;
        ans += (char)((k % 10) + '0');
        i--;
    }
    while (j >= 0)
    {
        int k = carry + (b[j] - '0');
        carry = k / 10;
        ans += (char)((k % 10) + '0');
        j--;
    }
    if (carry)
    {
        ans += '1';
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string a, b;
    cin >> a >> b;
    cout << solve(a, b);
    return 0;
}