#include<bits/stdc++.h>
using namespace std;
long long mod = 123456789;
long long k;

long long Try(long long k)
{
    if(k==0) return 0;
    if(k==1) return 2;
    long long tmp = Try(k/2)%mod;
    if(k%2==0) return (tmp*tmp)%mod;
    else
    {
        return ((tmp*tmp)%mod*2)%mod;
    }
}

//chua sub
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>k;
        cout<<Try(k-1)<<endl;
    }
    
    
    return 0;
}
