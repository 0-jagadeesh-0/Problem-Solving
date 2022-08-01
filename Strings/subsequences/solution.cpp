#include <iostream>
using namespace std;

string find(int i, int n, string s, string p)
{
    if (i == n)
    {
        cout << p << endl;
        return;
    }
    find(i + 1, n, s, p + s[i]);
    find(i + 1, n, s, p);
}

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    find(0, n, s, "");
    return 0;
}