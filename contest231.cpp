#include<bits/stdc++.h>
using namespace std;
int k,n,m;
string words[102];
char c[4][4];
bool check[4][4];
vector<string> res;
bool hasRes;

void init()
{
    cin>>k>>n>>m;
    hasRes = false;
    res.clear();
    for(int i=1;i<=k;i++) cin>>words[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>c[i][j];
            check[i][j] = false;
        }
    }
}

int X[] = {-1,-1,-1,0,0,1,1,1};
int Y[] = {-1,0,1,-1,1,-1,0,1};

bool Check(int i, int j)
{
    if(i > 0 && i <= n && j > 0 && j <= m && check[i][j] == false) return true;
}

void Try(int row, int col, string s)
{
    for(int i=1;i<=k;i++)
    {
        if(words[i] == s)
        {
            hasRes = true;
            res.push_back(s);
        }
    }
    for(int i=0;i<8;i++)
    {
        int R = row + X[i];
        int C = col + Y[i];

        if(R>0&&R<=n && C>0&&C<=m && check[R][C] == false)
        {
            check[R][C] = true; 
            Try(R,C,s+c[R][C]);
            check[R][C] = false;
        }
    }
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        init();
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                check[i][j] = true;
                string tmp="";
                Try(i,j,tmp+c[i][j]);
                check[i][j] = false; 
            }
        }
        if(!hasRes)
        {
            cout<<-1<<endl;
            continue;
        }
        // sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
        cout<<endl;
    }
}
