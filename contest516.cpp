#include <bits/stdc++.h>
using namespace std;

//xanh
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[1003];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int f[1003];
        for (int i = 0; i < n; i++)
        {
            f[i] = a[i];
            for (int j = 0; j < i; j++)
            {
                if (a[i] > a[j])
                {
                    f[i] = max(f[i], f[j] + a[i]);
                }
            }
        }
        int res = 0;
        for (int i = 0; i < n; i++)
            res = max(res, f[i]);
        cout << res << endl;
    }
}