int solve(vector<string> &exp)
{
    stack<long> st;
    int n = exp.size();
    for (int i = 0; i < n; i++)
    {
        if (exp[i] == "*" || exp[i] == "+" || exp[i] == "-" || exp[i] == "/")
        {
            long a = st.top();
            st.pop();
            long b = st.top();
            st.pop();
            if (exp[i] == "*")
                st.push(a * b);
            else if (exp[i] == "+")
                st.push(a + b);
            else if (exp[i] == "/")
                st.push(b / a);
            else
                st.push(b - a);
        }
        else
        {
            st.push(stoi(exp[i]));
        }
    }
    return st.top();
}