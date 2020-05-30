#include<bits/stdc++.h>
using namespace std;

int n;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d[50004]={};
        cin>>n;
        int m=n;
        if(n%2 != 0)
        {
            cout<<0<<endl;
            continue;
        }
        if(n == 2)
        {
            cout<<1<<endl;
            continue;
        }
        for(int i=2;i<=sqrt(m);i++)
        {
            while(n%i == 0)
            {
                d[i]++;
                n/=i;
            }
        }
        long long res=d[2];
        for(int i=3;i<=sqrt(m);i++)
        {
            if(d[i] != 0)
            {
                res *= (d[i]+1);
            }
        }
        if(n != 1) res *= 2;
        cout<<res<<endl;
    }
}