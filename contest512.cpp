#include <bits/stdc++.h>
using namespace std;
int n, k;
int mod = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (n < k)
        {
            cout << 0;
            continue;
        }
        long long res = 1;
        for (int i = n; i >= n - k + 1; i--)
        {
            res = (res * i) % mod;
        }
        cout << res << endl;
    }
}