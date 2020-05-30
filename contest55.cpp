#include<bits/stdc++.h>
using namespace std;
int n,k;
int mod = 1000000007;
long long f[1003][1003];

int main()
{
    int t;
    cin>>t;
    f[0][0] = 1;
    for(int i=0;i<=1003;i++) 
    {
        f[0][i] = 1;
        f[1][i] = i;
        f[i][i] = 1;
    }
    for(int i=1;i<=1000;i++)
        {
            for(int j=i;j<=1000;j++)
            {
                if(f[i][j] == 0)
                f[i][j] = (f[i-1][j-1] + f[i][j-1])%mod;
            }
        }

    while (t--)
    {
        cin>>n>>k;
        cout<<f[k][n]<<endl;
    }
    
}