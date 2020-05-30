#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[102],b[102];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}