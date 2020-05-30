#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007;
int n;
long long res;

void process(int tmp, int vt)
{
    if(vt == n)
    {
        res++;
        res %= mod;
    }
    else
    {
        for(int i=0;i<3;i++)
        {
            if(tmp == 0 || tmp != i)
                process(i,vt+1);
        } 
    }
    
}

int main() 
{
    cin>>n;
    process(-1,0);
    cout<<res;
}