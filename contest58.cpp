#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[502][502];
int f[502][502];

void init()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            f[i][j] = a[i][j];
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
        int ma = 0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(a[i][j] == 1 && a[i-1][j] == 1 && a[i][j-1] == 1 && a[i-1][j-1] == 1)
                {
                    f[i][j] = min(f[i-1][j],min(f[i][j-1],f[i-1][j-1]));
                    f[i][j]++;   
                    ma = max(ma, f[i][j]);                 
                }
            }
        }
        cout<<ma<<endl;
    }
}