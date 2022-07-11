class Solution
{
public:
    //     function to check weather the partiton is palindrome or not.

    bool isPalindrome(string s, int start, int end)
    {
        while (start <= end)
        {
            if (s[start] == s[end])
            {
                start++;
                end--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }

    //     function to store all possible palindrome partitions.

    void partition(int i, string s, vector<string> &v, vector<vector<string>> &ans, int n)
    {
        if (i == n)
        {
            ans.push_back(v);
            return;
        }

        //         Making all possible palindrome partitions.

        for (int j = i; j < n; j++)
        {

            if (isPalindrome(s, i, j))
            {
                v.push_back(s.substr(i, j - i + 1));
                partition(j + 1, s, v, ans, n);
                v.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s)
    {
        int n = s.size();
        vector<vector<string>> ans;
        vector<string> v;
        partition(0, s, v, ans, n);
        return ans;
    }
};