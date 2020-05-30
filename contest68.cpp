#include<bits/stdc++.h>
using namespace std;
int n,m, a[100005], b[100005];

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        sort(a,a+n); sort(b,b+m);
        int bl = 0;
        long long res = 0;
        while (b[bl] == 0)
        {
            res+=n;
            bl++;
        }
        int al = 0;
        while (a[al] == 0)
        {
            al++;
        }
        res -= al*bl;
        
        
    }
    
}