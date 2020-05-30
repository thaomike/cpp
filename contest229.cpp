#include<bits/stdc++.h>
using namespace std;
int n,m,a[101][101];
int res;
bool check[101][101];

void init() {
    res = 0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            check[i][j] = false;
        }
    }
}

void dfs(int r, int c)
{
    if(r == n && c == m)
    {
        res++;
    }
    else
    {
        if((r+1<=n) && check[r+1][c] == false)
        {
            check[r+1][c] = true;
            dfs(r+1, c);
            check[r+1][c] = false;
        }
        if(c+1<=m && check[r][c+1] == false)
        {
            check[r][c+1] = true;
            dfs(r, c+1);
            check[r][c+1] = false;
        }
    }
    
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        init();
        dfs(1,1);
        cout<<res<<endl;
    }
}