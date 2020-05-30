#include<bits/stdc++.h>
using namespace std;
int n, c[20][20];
bool check[20] = {};
int res = INT_MAX;

void Try(int i, int sum, int v)
{
    if(i==n) {
        res = min(res,sum + c[v][1]);
    } 
    else
    {
        for(int j=1;j<=n;j++)
        {
            if(check[j] == false)
            {
                check[j] = true;
                sum += c[v][j];
                if(sum < res) Try(i+1, sum, j);
                sum -= c[v][j];
                check[j] = false;
            }
        }
    }
    
}

int main() {
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>c[i][j];
        }
    }
    check[1] = true;
    Try(1,0,1);
    cout<<res;
}