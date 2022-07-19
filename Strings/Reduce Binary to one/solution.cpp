int solve(string s)
{
    int l = s.size();
    long long num = 0;
    int count = 0;
    int i = 0;
    int j = l - 1;
    int carry = 0;
    while (j > 0)
    {
        if (carry)
        {
            if (s[j] == '0')
            {
                s[j] = '1';
                carry = 1;
                count++;
            }
            else
            {
                count++;
                j--;
            }
        }
        else
        {
            if (s[j] == '0')
            {
                count++;
                j--;
            }
            else
            {
                s[j] = '0';
                carry = 1;
                count++;
            }
        }
    }
    return count;
}