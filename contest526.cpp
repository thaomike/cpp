#include<bits/stdc++.h>
using namespace std;
int f[101][25000];

//xanh, can xem lai
int main()
{
    int n,c;
    cin>>c>>n;
    int a[100];
    for(int i=1;i<=n;i++) cin>>a[i];
    
    int res = 0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=c;j++)
        {
            f[i][j] = f[i-1][j];
            if(a[i]<=j && f[i-1][j-a[i]]+a[i]>f[i][j]) 
            {
                f[i][j] = f[i-1][j-a[i]]+a[i];
            }
        }
    }
    cout<<f[n][c];
}