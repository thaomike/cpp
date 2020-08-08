#include <bits/stdc++.h>
using namespace std;
int v, e, m;
vector<int > ke[20];
int check[21];

bool ktra(int u, int c)
{
    for (int i = 0; i < ke[u].size(); i++)
    {
        if (check[ke[u][i]] == c)
            return false;
    }
    return true;
}

bool dfs(int u)
{
    if (u == v + 1)
        return true;
    for (int i = 1; i <= m; i++)
    {
        if (ktra(u, i))
        {
            check[u] = i;
            if(dfs(u + 1)) return true;
            check[u] = 0;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e >> m;
        memset(check,0,sizeof(check));
        for(int i=0;i<20;i++) ke[i].clear();
        for (int i = 0; i < e; i++)
        {
            int u, k;
            cin >> u >> k;
            ke[u].push_back(k);
            ke[k].push_back(u);
        }
        if(dfs(1)) cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
    }
}