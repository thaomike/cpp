#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[10004];

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long res = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            int tmp = a[i] + k;
            int x = upper_bound(a + i + 1, a + n, tmp) - a;
            while (x == n || a[x] - a[i] >= k)
                x--;
            res += x - i;
        }
        cout << res << endl;
    }
}
