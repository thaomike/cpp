#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[100][100],b[100][100],c[100][100];

void nhan()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j] = 0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                b[j][i] = a[i][j];
            }
        }
        nhan();
        cout<<"Test "<<k<<":\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}