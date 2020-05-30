#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long f[51];
        memset(f, 0, sizeof(f));
        cin >> n;
        f[0] = 0;
        f[1] = 1; f[2] = 2; f[3] = 4;
        for(int i=4;i<=n;i++)
        {
            f[i] = f[i-1]+f[i-2]+f[i-3];
        }
        cout<<f[n]<<endl;
    }
}