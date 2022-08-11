#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &nums0, vector<int> &nums1)
{
    int n = nums0.size();
    int m = nums1.size();
    int p = (n + m) / 2;
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (nums0[i] < nums1[j])
        {
            if (k == p)
            {
                return nums0[i];
            }
            k++;
            i++;
        }
        else
        {
            if (k == p)
            {
                return nums1[j];
            }
            k++;
            j++;
        }
    }
    while (i < n)
    {
        if (k == p)
        {
            return nums0[i];
        }
        k++;
        i++;
    }
    while (j < m)
    {
        if (k == p)
        {
            return nums1[j];
        }
        k++;
        j++;
    }
    return 0;
}

int main()
{
    return 0;
}