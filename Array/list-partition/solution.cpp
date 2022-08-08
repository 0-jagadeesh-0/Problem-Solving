vector<string> solve(vector<string> &strs)
{
    int r = 0;
    int g = 0;
    int b = 0;
    int n = strs.size();
    for (int i = 0; i < n; i++)
    {
        if (strs[i] == "red")
        {
            r++;
        }
        else if (strs[i] == "green")
        {
            g++;
        }
        else
        {
            b++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i < r)
        {
            strs[i] = "red";
        }
        else if (i < r + g)
        {
            strs[i] = "green";
        }
        else
        {
            strs[i] = "blue";
        }
    }
    return strs;
}