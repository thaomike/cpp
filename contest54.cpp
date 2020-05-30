#include<bits/stdc++.h>
using namespace std;
int n,k,a[1003];
int f[1003][1003];

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        // cout<<a[1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<k;j++)
            {
                f[i][j] = 0;
            }
        }
        int q = a[1]%k;
        f[1][q] = 1;
        for(int i=2;i<=n;i++)
        {
            // int z = a[i]%k;
            // f[i][z] = f[i-1][z]+1;
            for(int j=0;j<k;j++)
            {
                int tmp = (j+a[i])%k;
                if(f[i-1][j] == 0 && j!=0) f[i][tmp] = f[i-1][tmp];
                 else 
                f[i][tmp] = max(f[i-1][j]+1, f[i-1][tmp]);
            }
        }

        cout<<f[n][0]<<endl;
    }
    
}