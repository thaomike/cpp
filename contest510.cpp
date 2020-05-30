#include <bits/stdc++.h>
using namespace std;
int n, m, a[1003][1003];
int f[1003][1003];

void init()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        f[0][0] = a[0][0];
        for (int i = 1; i < m; i++)
        {
            f[0][i] = f[0][i - 1] + a[0][i];
        }
        for (int i = 1; i < n; i++)
            f[i][0] = f[i - 1][0] + a[i][0];

        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                f[i][j] = min(f[i - 1][j - 1], min(f[i - 1][j], f[i][j - 1])) + a[i][j];
            }
        }
        cout << f[n-1][m-1] << endl;
    }
}