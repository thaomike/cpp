#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1003];

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n,greater<int>());
        for(int i=0;i<k;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    
}