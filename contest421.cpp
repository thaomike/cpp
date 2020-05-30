#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int n,k;

long long Exp(int n, int k)
{
    if(k == 0) return 0;
    if(k == 1) return n;
    long long x = Exp(n,k/2);
    if(k%2 == 0) return (x*x%mod);
    else
    {
        return (((x*x)%mod)*n)%mod;
    }
    
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        cout<<Exp(n,k)<<endl;
    }
    
}