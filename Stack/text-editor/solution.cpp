string solve(string s)
{
    int n = s.size();
    if (n == 1)
        return s;
    stack<char> st;
    string res = "";
    for (int i = 0; i < n;)
    {
        if (s[i] == '<' && s[i + 1] == '-')
        {
            if (!st.empty())
            {
                st.pop();
            }
            i += 2;
        }
        else
        {
            st.push(s[i]);
            i++;
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    int start = 0;
    int end = res.size() - 1;
    while (start < end)
    {
        char t = res[start];
        res[start] = res[end];
        res[end] = t;
        start++;
        end--;
    }
    return res;
}