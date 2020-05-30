#include <bits/stdc++.h>
using namespace std;
int a[1003] = {};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(a,0,sizeof(a));
        int n;
        // int ma = 0, mi = INT_MAX;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int res = 0;
        for(int i=1;i<n;i++)
        {
            if(a[i] == a[i-1]) continue;
            res += a[i] - a[i-1] - 1;
        }
        cout << res << endl;
    }
}