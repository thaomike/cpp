#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[(int)1e5+1];
    int b[(int)1e5+1];
    int res[(int)1e5+2];
    
    cin>>n;
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        int index = lower_bound(b,b+n,a[i]) - b;
        res[i] = index;
    }
    for(int i=0;i<n;i++) cout<<res[i]<<" "; 
}