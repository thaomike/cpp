#include<bits/stdc++.h>
using namespace std;
int n;
int a[11][11];
// bool check[11][11];
int res[100];
bool check = false;

void init()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) cin>>a[i][j];
    }
}

void print()
{
    check = true;
    for(int i=0;i<2*(n-1);i++)
    {
        if(res[i] == 0) cout<<"D";
        else
        {
            cout<<"R";
        }
    }
    cout<<" ";
}

void Try(int i, int r, int c)
{
    if(i == 2*(n-1))
    {
        if(r == n-1 && c == n-1)
        {
            print();
        }
    }
    else
    {
        for(int j=0;j<2;j++)
        {
            res[i] = j;
            if(j == 0 && (r+1 < n) && (a[r+1][c] == 1) )
            {
                // check[r+1][c] = true;
                Try(i+1, r+1, c);
            }
            if(j==1 && (c+1 < n) && (a[r][c+1] == 1))
            {
                // check[r][c+1] = true;
                Try(i+1,r,c+1);
            }
        }
    }
    

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        check = false;
        cin>>n;
        init();
        if(a[0][0] == 0)
        {
            cout<<-1<<endl;
            continue;
        }
        Try(0,0,0);
        if(!check) cout<<-1;
        cout<<endl;
    }
}