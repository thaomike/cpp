#include<bits/stdc++.h>
using namespace std;
int n, a[(int)1e6+1], b[(int)1e6+1];

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            b[i] = a[i];
        }
        sort(b+1,b+n+1);
        int l = 1;
        while(b[l] == a[l]) l++;
        int r = n;
        while(b[r] == a[r]) r--;
        cout<<l<<" "<<r<<endl;
        
    }
    
}