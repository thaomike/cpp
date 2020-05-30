#include<bits/stdc++.h>
using namespace std;
int n,k,a[102];
//chua sub
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int res = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i] > k) break;
            if(a[i] == k)
            {
                continue;
            }
            int j = lower_bound(a+i+1,a+n,k-a[i]) - a;
            int tmp = j;
            while(a[i] + a[j] == k && j<n) j++;
            res = res + j-tmp;
        }
        cout<<res<<endl;
    }
    
}