bool solve(string s)
{
    stack<char> st;
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
                return false;
            else
                st.pop();
        }
    }
    return st.empty();
}