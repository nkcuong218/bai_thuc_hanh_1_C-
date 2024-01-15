#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][n];
        int max = 0, s = 0, sum = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                sum += a[i][j];
            }
        for (int i = 0; i < n; i++)
        {
            s = 0;
            for (int j = 0; j < n; j++)
            {
                s += a[i][j];
            }
            if (max < s)
                max = s;
        }
        for (int i = 0; i < n; i++)
        {
            s = 0;
            for (int j = 0; j < n; j++)
            {
                s += a[j][i];
            }
            if (max < s)
                max = s;
        }
        cout << max * n - sum << endl;
    }
}
