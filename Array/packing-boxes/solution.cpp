vector<vector<int>> solve(vector<int>& nums) {
    vector<vector<int>> ans;
    int n=nums.size();
    if(n==0) return ans;
    vector<int> v;
    for(int i=0;i<n-1;i++)
    {
        if(nums[i]!=nums[i+1])
        {
            v.push_back(nums[i]);
            ans.push_back(v);
            v.clear();
        }
        else
        {
            v.push_back(nums[i]);
        }
    }
    if(nums[n-1]==nums[n-2])
    {
        v.push_back(nums[n-1]);
        ans.push_back(v);
    }
    else
    {
        ans.push_back({nums[n-1]});
    }
    return ans;
}