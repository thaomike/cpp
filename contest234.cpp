#include<bits/stdc++.h>
using namespace std;
int arr[9][9];
bool doc[9], traitren[22], traiduoi[22];
int res = 0;
int n = 8;

void init()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>arr[i][j];
        }
    }
    res = 0;
    for(int i=0;i<=n;i++) doc[i] = false;
    for(int i=0;i<=21;i++)
    {
        traitren[i] = traiduoi[i] = false;
    }
}

void Try(int r, int sum)
{
    if(r == n+1)
    {
        res = max(res,sum);
    }
    else
    {
        for(int c=1;c<=n;c++)
        {
            if(!doc[c] && !traitren[n-r+c] && !traiduoi[r+c])
            {
                doc[c] = traiduoi[r+c] = traitren[n-r+c] = true;
                Try(r+1, sum+arr[r][c]);
                doc[c] = traiduoi[r+c] = traitren[n-r+c] = false;
            }
        }
    }
    
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        init();
        Try(1,0);
        cout<<res<<endl;
    }
}