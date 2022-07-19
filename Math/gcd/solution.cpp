#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    return a % b == 0 ? b : gcd(a, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}