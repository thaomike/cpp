#include <bits/stdc++.h>
using namespace std;
int f[1003][25000];

//xanh b27
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, v;
        cin >> n >> v;
        int a[1003], c[1003];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<v;j++) f[i][j] = 0;
        }
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> c[i];

        int res = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= v; j++)
            {
                f[i][j] = f[i - 1][j];
                if (a[i] <= j && f[i - 1][j - a[i]] + c[i] > f[i][j])
                {
                    f[i][j] = f[i - 1][j - a[i]] + c[i];
                }
            }
        }
        cout << f[n][v]<<endl;
    }
}