#include<bits/stdc++.h>
using namespace std;
string s;
int f[1003][1003];

//xanh
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n>>s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[i] == s[j] && i!=j)
                {
                    f[i+1][j+1] = f[i][j]+1;
                }
                else
                {
                    f[i+1][j+1] = max(f[i][j+1],f[i+1][j]);
                }
            }
        }
        int res = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                res = max (res,f[i+1][j+1]);
            }
        }
        cout<<res<<endl;
    }
}