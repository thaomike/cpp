#include<bits/stdc++.h>
using namespace std;
int n;
int a[1003];

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=n-1;i>=n/2;i--)
        {
            if(i == (n-i-1)) cout<<a[i]<<" ";
            else
            {
                cout<<a[i]<<" "<<a[n-i-1]<<" ";
            }
            
        }
        cout<<endl;
    }
    
}