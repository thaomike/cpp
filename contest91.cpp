#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector<vector<int> > ke;
        int v,e;
        cin>>v>>e;
        ke.resize(v+1);
        for(int i=0;i<e;i++)
        {
            int s,u;
            cin>>s>>u;
            ke[s].push_back(u);
            ke[u].push_back(s);
        }
        for(int i=1;i<=v;i++)
        {
            cout<<i<<": ";
            for(int j=0;j<ke[i].size();j++)
            {
                cout<<ke[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}