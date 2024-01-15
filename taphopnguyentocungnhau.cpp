#include <iostream>
#include <algorithm>
using namespace std;
bool even_check(long long n, long long m)
{
    if (m % 2 == 0 && (n % 4 == 0 || (n + 1) % 4 == 0))
        return true;
    else if (m % 2 != 0 && ((n % 2 == 0 && n % 4 != 0) || (n + 1) % 2 == 0 && (n + 1) % 4 != 0))
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long m, n;
        cin >> n >> m;
        if (!even_check(n, m))
            cout << "No\n";
        else
        {
            long long a = (n * (n + 1) / 2 + m) / 2;
            long long b = (n * (n + 1) / 2 - m) / 2;
            if (__gcd(a, b) != 1)
                cout << "No\n";
            else
                cout << "Yes\n";
        }
    }
    return 0;
}
