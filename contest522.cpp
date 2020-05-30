#include<bits/stdc++.h>
using namespace std;
int n, a[1000006];
long long f[1000006];
//xanh
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        memset(f,0,sizeof(f));
        for(int i=0;i<n;i++)
        {
            f[i] = max(f[i-2]+a[i],f[i-1]);
        }
        long long res = 0;
        for(int i=0;i<n;i++) res = max(res,f[i]);
        cout<<res<<endl;
    }
    
}