#include <bits/stdc++.h>

using namespace std;

void findSubsequences(int i, int n, vector<int> &nums, vector<int> &v, vector<vector<int>> &ans)
{
    if (i == n)
    {
        ans.push_back(v);
        return;
    }
    v.push_back(nums[i]);
    findSubsequences(i + 1, n, nums, v, ans); // picking the current element.
    v.pop_back();
    findSubsequences(i + 1, n, nums, v, ans); // not picking the current element.
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<vector<int>> ans;
    vector<int> v;
    findSubsequences(0, n, nums, v, ans);
    for (int i = 0; i < ans.size() - 1; i++)
    {
        cout << "[ ";
        int k = ans[i].size();
        for (int j = 0; j < k; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "]" << endl;
    }
    cout << "[]" << endl;

    return 0;
}