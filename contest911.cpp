#include <bits/stdc++.h>
using namespace std;

//do thi vo huong
vector<vector<int> > ke;
bool check[1001] = {};
vector<int> res;
int V, E, start, finish;

void dfs(int u)
{
    for (int i = 0; i < ke[u].size(); i++)
    {
        int v = ke[u][i];
        if (check[v] == false)
        {
            check[v] = true;
            res[v] = u;
            if (v == finish)
                return;
            dfs(v);
        }
    }
}

vector<int> way;
void truyVet(int v)
{
    way.push_back(v);
    if (res[v] != start)
    {
        truyVet(res[v]);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> V >> E >> start >> finish;
        ke.resize(V + 1);
        for (int i = 0; i < ke.size(); i++)
        {
            ke[i].clear();
        }
        for (int i = 0; i < E; i++)
        {
            int s, uu;
            cin >> s >> uu;
            ke[s].push_back(uu);
        }
        memset(check, 0, sizeof(check));
        res.clear();
        way.clear();
        res.resize(V+1);
        check[start] = true;
        if(start == finish)
        {
            cout<<start<<endl;
            continue;
        }
        dfs(start);
        if (check[finish] == false)
            cout <<"-1\n";
        else
        {
            truyVet(finish);
            cout <<start<<" ";
            // for(int i=1;i<res.size();i++) cout<<res[i]<<" ";
            for(int i=way.size()-1;i>=0;i--)
                cout<<way[i]<<" ";
            cout<<endl;
        }
    }
}