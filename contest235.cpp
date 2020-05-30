#include<bits/stdc++.h>
using namespace std;
int n,k,s;
int res = 0;

void Try(int i, int sum, int last)
{
    if(i == 0)
    {
        if(sum == s)
        {
            res++;
        }
    }
    else
    {
        for(int j=last+1;j<=n;j++)
        {
            if(sum + j <= s)
                Try(i-1,sum+j, j);
            else
            {
                break;
            }
            
        }
    }
    
    
}

int main()
{
    // n = k = s = 1;
    while(true)
    {
        cin>>n>>k>>s;
        if(n+k+s == 0) break;
        res = 0;
        Try(k,0,0);
        cout<<res<<endl;
    }
}