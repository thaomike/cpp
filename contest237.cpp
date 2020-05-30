#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<vector<int> > ke;
int check[22][22];
int res = 0;

void init()
{
    cin>>n>>m;
    ke.resize(n);
    res = 0;
    for(int i=0;i<n;i++) ke[i].clear();

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            check[i][j] = 0;
        }
    }
    
    for(int i=0;i<m;i++)
    {
        int tmp;
        cin>>tmp;
        int tp;
        cin>>tp;
        check[tmp][tp] = 1;
        check[tp][tmp] = 1;
    }
}

void Try(int u, int s)
{
    res = max(res,s);
    for(int i=0;i<n;i++)
    {
        if(check[u][i])
        {
            check[u][i] = check[i][u] = 0;
            Try(i, s+1);
            check[u][i] = check[i][u] = 1;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        init();
        for(int i=0;i<n;i++)
        {
            Try(i,0);
        }
        cout<<res<<endl;
    }
}