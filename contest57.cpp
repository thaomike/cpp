#include<bits/stdc++.h>
using namespace std;
int n,k;
int mod = 1e9+7;
long long f[100005];

//xanh
int main()
{
    int t;
    cin>>t;
    f[0] = 0;
    while (t--)
    {
        memset(f,0,sizeof(f));
        cin>>n>>k;
        long long tmp = 1;
        for(int i=1;i<=k;i++)
        {
            f[i] = tmp%mod;
            tmp = (tmp*2)%mod;
        }
        for(int i=k+1;i<=n;i++)
        {
            f[i] = 0;
            for(int j=1;j<=k && j<=i;j++)
            {
                f[i] = (f[i] + f[i-j])%mod;
            }
        }
        cout<<f[n]<<endl;
    }
    
}