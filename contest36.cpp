#include<bits/stdc++.h>
using namespace std;
int n,a[100],b[100];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        int l = 0, r = n-1;
        while(l<r)
        {
            if(a[l] > a[r]) swap(a[l],a[r]);
            l++; r--;
        }
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            if(a[i] != b[i])
            {
                cout<<"No\n";
                flag = false;
                break;
            }
        }
        if(flag) cout<<"Yes\n";
    }
}