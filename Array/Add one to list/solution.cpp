vector<int> solve(vector<int> &nums)
{
    int n = nums.size();
    int carry = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (carry)
        {
            int temp = nums[i] + carry;
            nums[i] = temp % 10;
            carry = temp / 10;
        }
    }
    if (carry)
    {
        nums.insert(nums.begin(), 1);
    }
    n = nums.size();
    vector<int> v;
    int i = 0;
    for (; i < n; i++)
    {
        if (nums[i] > 0)
            break;
    }
    for (int j = i; j < n; j++)
        v.push_back(nums[j]);
    return v;
}