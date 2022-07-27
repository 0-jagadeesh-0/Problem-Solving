int solve(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int ans = INT_MAX;
    for (int i = 0; i <= n - k; i++)
    {
        ans = min(ans, nums[i + k - 1] - nums[i]);
    }
    return ans;
}