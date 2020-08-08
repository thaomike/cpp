#include<bits/stdc++.h>
using namespace std;
int n,m,U;
int check[1003];
vector<int> ke[1003];

void dfs()
{
    int d = 1;
    stack<int> st;
    queue<int> res;
    st.push(U);
    check[U] = 1;
    while (st.size())
    {
        int u = st.top();
        st.pop();
        for(int i=0;i<ke[u].size();i++)
        {
            if(check[ke[u][i]] == 0)
            {
                st.push(u);
                res.push(u);
                st.push(ke[u][i]);
                res.push(ke[u][i]);
                check[ke[u][i]] = 1;
                d++;
                break;
            }
        }
    }
    if(d == n)
    {
        while (res.size()>1)
        {
            cout<<res.front()<<" ";
            res.pop();
            cout<<res.front()<<endl;
            res.pop();
        }
    }
    else
    {
        cout<<-1<<endl;
    }
    
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        for(int i=0;i<1001;i++) ke[i].clear();
        cin>>n>>m>>U;
        for(int i=0;i<m;i++)
        {
            int e,v;
            cin>>e>>v;
            ke[e].push_back(v);
            ke[v].push_back(e);
        }
        dfs();
    }
    
}