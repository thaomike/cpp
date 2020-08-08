#include <bits/stdc++.h>
using namespace std;

int n,m,check;
vector<int> List[20];
bool chuaXet[11] = {};

void abc(int a[3][3])
{
    a[0][0] =10;
}

void Hamilton(int u, int count)
{
    if (count == n)
    {
        check = 1;
        return;
    }
    for (int i = 0; i < List[u].size(); i++)
    {
        int v = List[u][i];
        if (chuaXet[v] == true)
        {
            chuaXet[v] = false;
            Hamilton(v, count + 1);
            chuaXet[v] = true;
        }
    }
}

int main()
{
    int i,u,v;
    int t;
    cin >> t;
    while (t--)
    {
        memset(chuaXet, true, sizeof(chuaXet));
        cin >> n >> m;
        check = 0;
        for(i=0;i<20;i++) List[i].clear();

        for (i = 0; i < m; i++)
        {
            cin >> u >> v;
            List[u].push_back(v);
            List[v].push_back(u);
        }
        for (i = 1; i <= n; i++)
        {
            chuaXet[i] = false;
            Hamilton(i, 1);
            chuaXet[i] = true;
        }
        cout<<check<<endl;
    }

    int a[3][3];
    a[0][0] = 1;
    abc(a);
    cout<<a[0][0];
}

int n, s, a[100][100], d[100], e[100], vs[100];
void Dijkstra(int s)
{
    int u, v;
    for (v = 1; v <= n; v++)
    {
        d[v] = a[s][v];
        e[v] = s;
    }
    d[s] = 0;
    e[s] = 0;
    vs[s] = 1;
    while (1)
    {
        int u = 0, min = 32767;
        for (v = 1; v <= n; v++)
            if (vs[v] == 0 && d[v] < min)
            {
                u = v;
                min = d[v];
            }
        if (u == 0)
            return;
        vs[u] = 1;
        for (v = 1; v <= n; v++)
            if (vs[v] == 0 && d[v] > d[u] + a[u][v])
            {
                d[v] = d[u] + a[u][v];
                e[v] = u;
            }
    }
}
