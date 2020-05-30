#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1003];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        int x = lower_bound(a,a+n,k) - a;
        int res = 0;
        while(a[x] == k)
        {
            res++;
            x++;
        }
        if(res == 0)
        {
            cout<<-1<<endl;
            continue;
        }
        cout<<res<<endl;
    }
}
