#include<bits/stdc++.h>
using namespace std;
int n;
int a[102];
int s;

void process()
{
    int f[10004]={};
    f[0] = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=s;j>=a[i];j--)
        {
            if(f[j-a[i]] == 1) f[j] = 1;
        }
    }
    if(f[s] == 1) cout<<"YES\n";
    else
    {
        cout<<"NO\n";
    }
    
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s = 0;
        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
            s += a[i];
        }
        if(s%2 == 0)
        {
            s/=2;
        }
        else {
            cout<<"NO\n";
            continue;
        }
        sort(a,a+n);
        process();

    }
}