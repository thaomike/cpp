#include<bits/stdc++.h>
using namespace std;
int n,E;
vector<int> ke[1003];
bool vs[1000];
int res=0;

void bfs(int s)
{
	queue<int> q;
	
	for(int i=0;i<ke[s].size();i++)
	{
		if(vs[ke[s][i]] == 1 && ke[s][i] != truoc) res = 1;
		else if(vs[ke[s][i]] == 0)
		{
			vs[ke[s][i]] = 1;
			dfs(ke[s][i], s);
		}
	}
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<1003;i++) ke[i].clear(); 
        memset(vs,0,sizeof(vs));
        cin>>n>>E;
        for(int i=0;i<E;i++)
        {
        	int u,v;
        	cin>>u>>v;
        	ke[u].push_back(v);
        	ke[v].push_back(u);
		}
		res = 0;
		for(int i=1;i<=n;i++)
		{
			if(vs[i] == 0)
			{
				vs[i] = 1;
				dfs(i,i);
			}
		}
		if(!res) cout<<"NO\n";
		else cout<<"YES\n";
    }
}
