class MinimumStack
{
public:
    int ans = INT_MAX;
    vector<int> mini;
    stack<int> st;
    MinimumStack()
    {
    }

    void append(int val)
    {
        st.push(val);
        if (ans > val)
        {
            ans = val;
            mini.push_back(ans);
        }
    }

    int peek()
    {
        return st.top();
    }

    int min()
    {
        return ans;
    }

    int pop()
    {
        int k = st.top();
        if (k == mini[mini.size() - 1])
        {
            if (!mini.empty())
            {
                mini.pop_back();
            }
            if (mini.size() >= 1)
            {
                ans = mini[mini.size() - 1];
            }
            else
            {
                ans = INT_MAX;
            }
        }
        st.pop();
        return k;
    }
};