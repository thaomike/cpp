#include<bits/stdc++.h>
using namespace std;
int n, x;
int a[(int)1e6+1];

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>x;
        for(int i=0;i<n;i++) cin>>a[i];
        int i = lower_bound(a,a+n,x) - a;
        if(a[i] == x) cout<<1<<endl;
        else
        {
            cout<<-1<<endl;
        }
        
    }
    
}