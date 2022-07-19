bool solve(string s)
{
    stack<char> st;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ')')
        {
            if (st.empty())
            {
                return false;
            }
            else if (st.top() == '(')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else if (s[i] == '}')
        {
            if (st.empty())
            {
                return false;
            }
            else if (st.top() == '{')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else if (s[i] == ']')
        {
            if (st.empty())
            {
                return false;
            }
            else if (st.top() == '[')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else
        {
            st.push(s[i]);
        }
    }
    return st.empty();
}