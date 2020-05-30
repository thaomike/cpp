#include<bits/stdc++.h>
using namespace std;
int n,m;
long long f[50][50];

//wrong
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++) f[i][j] = 0;
        }
        for(int i=m;i>=1;i--) f[n][i] = 1;
        for(int i=n;i>=1;i--) f[i][m] = 1;
        f[0][m] = 1;
        f[n][0] = 1;

        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                f[i][j] = f[i+1][j] + f[i][j+1];
            }
        }
        
        cout<<f[0][0]<<endl;
    }
    
}