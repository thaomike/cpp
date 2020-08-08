#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> ke[1003];
int check[1003];
int f = 0;

//chua xanh
bool dfs(int u)
{
    if(u == n+1) return true;
    for(int i=1;i<=2;i++)
    {
        bool flag = true;
        for(int j=0;j<ke[u].size();j++)
        {
            if(check[ke[u][j]] == i)
            {
                flag = false;
                break;
            }
        }
        if(flag) {
            check[u] = i;
            if(dfs(u+1)) return true;
            check[u] = 0;       
        }
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        memset(check,0,sizeof(check));
        f=0;
        cin>>n>>m;
        for(int i=0;i<n;i++) ke[i].clear();
        for(int i=0;i<m;i++)
        {
            int u,v;
            cin>>u>>v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        for(int i=0;i<n;i++)
        {
            sort(ke[i].begin(),ke[i].end());
        }
        
        if(dfs(1)) cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
    }
    
}