#include <bits/stdc++.h>
using namespace std;
int n;
int a[1003], b[1003];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        long long res = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] != a[i])
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (a[j] == b[i])
                    {
                        swap(a[j], a[i]);
                        res++;
                        break;
                    }
                }
            }
        }
        cout << res << endl;
    }
}