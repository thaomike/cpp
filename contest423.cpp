#include<bits/stdc++.h>
using namespace std;
long long n,k;

int tinh(long long n, long long k)
{
    if(k == 1) return 1;
    long long x = pow(2, n-1);
    if(k == x) return n;
    if(k < x) return tinh(n-1,k);
    return tinh(n-1,k-x);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cout<<tinh(n,k)<<endl;
    }
}