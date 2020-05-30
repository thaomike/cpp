#include<bits/stdc++.h>
using namespace std;
long long f[10004];

void prePro()
{
    f[0] = 1;
    for(int i=1;i<=10000;i++)
    {
        long long mi = LLONG_MAX;
        for(int j=i-1;j>=0;j--)
        {
            long long hai = f[j]*2;
            long long ba = f[i]*3;
            long long nam = f[i]*5;
            if(hai>f[i-1])
                mi = min(mi,hai);
            if(ba>f[i-1])
                mi = min(mi,ba);
            if(nam>f[i-1]) mi = min(mi,nam);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
    }
    
}