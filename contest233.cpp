#include<bits/stdc++.h>
using namespace std;
int n;
bool doc[11], traitren[22], traiduoi[22];
int res = 0;

void Try(int r)
{
    if(r==n+1)
    {
        res++;
    }
    {
        for(int c=1;c<=n;c++)
        {
            if(!doc[c] && !traitren[n+r-c] && !traiduoi[r+c])
            {
                doc[c] = true;
                traitren[n+r-c] = traiduoi[r+c] = true;
                Try(r+1);
                doc[c] = false;
                traitren[n+r-c] = traiduoi[r+c] = false;                
            }
        }
    }
}

int main() {
    cin>>n;
    for(int i=0;i<=n;i++) doc[i] = false;
    for(int i=0;i<=21;i++)
    {
        traitren[i] = false;
        traiduoi[i] = false;
    }
    Try(1);
    cout<<res;
}