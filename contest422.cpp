#include<bits/stdc++.h>
using namespace std;
int n, a[100005],k;

int Try(int l, int r)
{
    if(l>r) return -1;
    int mid = (l + r) / 2;
    if (k == a[mid])
        return mid;
    else
    {
        if(k>a[mid]) return Try(mid+1,r);
        else
        {
            return Try(l,mid-1);
        }
    }
    
}

//chua sub bro
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        int res = Try(0,n-1);
        if(res == -1) cout<<"NO\n";
        else cout<<res+1<<endl;
    }
    
}