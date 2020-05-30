#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

ll n,a[10000007];
ll res;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        res = 0;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            res = ((res%mod) + (i*a[i]%mod))%mod;
        }
        cout<<res<<endl;
    }
    
}