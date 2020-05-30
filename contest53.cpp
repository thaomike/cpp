#include<bits/stdc++.h>
using namespace std;
int n,s;
int a[202];
int f[40001];

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>s;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<40001;i++) f[i] = 0;
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
}