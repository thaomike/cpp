#include<bits/stdc++.h>
using namespace std;
int n;
int a[11][11];
bool check[11][11];
string s;
vector<string> res;
bool Check = false;

void init()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            check[i][j] = false;
        }
    }
}

int X[] = {1,0,0,-1};
int Y[] = {0,-1,1,0};
char Z[] = {'D','L','R','U'};
void dfs(int r, int c, string ss)
{
    if(r == n && c == n)
    {
        // cout<<ss<<" ";
        Check = true;
        res.push_back(ss);
    }
    else
    {
        int R,C;
        for(int i=0;i<4;i++)
        {
            R = r + X[i];
            C = c + Y[i];
            if((R>0) && (R<=n) && (C>0) && (C<=n) && (a[R][C] == 1) && (check[R][C] == 0))
            {
                check[R][C] = true;
                // string tmp = s + Z[i];
                // cout<<tmp;
                // cout<<ss+Z[i];
                dfs(R,C,ss+Z[i]);
                check[R][C] = false;

            }

        }
    }

}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        // s = "";
        init();
        check[1][1] = true;
        Check = false;

        if(a[1][1] == 0)
        {
            cout<<-1<<endl;
            continue;
        }
        res.clear();
        dfs(1,1,s);
        if(!Check)
        {
            cout<<-1<<endl;
            continue;
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++) {
            cout<<res[i]<<" ";
        }

        cout<<endl;
    }
}