int solve(int n)
{
    int mod = 1e9 + 7;
    if (n == 1)
        return 1;
    int step1 = 1;
    int step2 = 2;
    for (int i = 3; i <= n; i++)
    {
        int curr = (step1 + step2) % mod;
        step1 = step2;
        step2 = curr;
    }
    return step2;
}