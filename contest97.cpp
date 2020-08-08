#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > ke;
bool check[1001]={};
vector<int> res;


void dfs(int u)
{
    for(int i=0;i<ke[u].size();i++)
    {
        int v = ke[u][i];
        if(check[v] == false)
        {
            check[v] = true;
            res.push_back(v);
            dfs(v);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        
        int v,e,u;
        cin>>v>>e>>u;
        ke.resize(v+1);
        for(int i=0;i<ke.size();i++)
        {
            ke[i].clear();
        }
        for(int i=0;i<e;i++)
        {
            int s,uu;
            cin>>s>>uu;
            ke[s].push_back(uu);
        }
        memset(check,0,sizeof(check));
        res.clear();
        res.push_back(u);
        check[u] = true;
        dfs(u);
        for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
        cout<<endl;
    }

}