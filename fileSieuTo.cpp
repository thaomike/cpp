#include<bits/stdc++.h>
using namespace std;
long long n;

int main()
{
    cin>>n;
    long long m = n;
    long long k=0;
    while(n%1024 == 0)
    {
        n/=1024;
        k++;
    }
    if(n > 1024) cout<<m<<" byte";
    else
    {
        if(k == 0) cout<<n<<" byte";
        if(k == 1) cout<<n<<"KiB";
        if(k == 2) cout<<n<<"MiB";
        if(k == 3) cout<<n<<"GiB";
        if(k == 4) cout<<n<<"TiB";
        if(k == 5) cout<<n<<"PiB";
        if(k>5)
        {
            for(int i=5;i<k;i++)
            {
                n*=1024;
            }
            cout<<n<<"PiB";
        }
    }
}