#include<bits/stdc++.h>
using namespace std;
int n, k, a[100];

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int mi = min(k,n-k);
        int s=0;
        for(int i=0;i<mi;i++)
        {
            s+=a[i];
        }
        int ss=0;
        for(int i=mi;i<n;i++)
        {
            ss+=a[i];
        }
        cout<<ss-s<<endl;
        /* code */
    }
    
}