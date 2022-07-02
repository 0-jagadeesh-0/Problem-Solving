// Leetcode Problem link : https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/


class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int n = horizontalCuts.size();
        int m = verticalCuts.size();
        long long k = 1000000007;
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        int hmax=max(horizontalCuts[0],h-horizontalCuts[n-1]);
        int wmax=max(verticalCuts[0],w-verticalCuts[m-1]);
        for(int i=1;i<n;i++)
        {
           hmax=max(hmax,horizontalCuts[i]-horizontalCuts[i-1]); 
        }
        for(int i=1;i<m;i++)
        {
            wmax=max(wmax,abs(verticalCuts[i]-verticalCuts[i-1])); 
        }
        return (hmax%k)*(wmax%k)%k;
    }
};


// Time Complexity is O(NlogN).
