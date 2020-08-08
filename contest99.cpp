#include <bits/stdc++.h>
using namespace std;

//do thi co huong
vector<vector<int> > ke;
bool check[1001] = {};
vector<int> res;

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    while (q.size())
    {
        int start = q.front();
        q.pop();
        for (int i = 0; i < ke[start].size(); i++)
        {
            int v = ke[start][i];
            if (check[v] == false)
            {
                check[v] = true;
                res.push_back(v);
                q.push(v);
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int v, e, u;
        cin >> v >> e >> u;
        ke.resize(v + 1);
        for (int i = 0; i < ke.size(); i++)
        {
            ke[i].clear();
        }
        for (int i = 0; i < e; i++)
        {
            int s, uu;
            cin >> s >> uu;
            ke[s].push_back(uu);
        }
        memset(check, 0, sizeof(check));
        res.clear();
        res.push_back(u);
        check[u] = true;
        bfs(u);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
}