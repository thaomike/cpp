#include<bits/stdc++.h>
using namespace std;
int n,m;

int a[100005];

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++)
        {
            int tmp;
            cin>>tmp;
            a[tmp] = 1;
        }
        for(int i=0;i<m;i++)
        {
            int tmp;
            cin>>tmp;
            a[tmp]++;
        }
        for(int i=0;i<100001;i++)
        {
            if(a[i]) cout<<i<<" ";
        }
        cout<<endl;
        for(int i=0;i<100001;i++)
        {
            if(a[i] == 2) cout<<i<<" ";
        }
        cout<<endl;
    }
}