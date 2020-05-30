#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3;
int f[102][102][102];
int n1,n2,n3;

//xanh
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n1>>n2>>n3;
        cin>>s1>>s2>>s3;
        for(int i=0;i<=n1;i++)
        {
            for(int j=0;j<=n2;j++)
            {
                for(int k=0;k<=n3;k++) f[i][j][k] = 0;
            }
        }
        for(int i=0;i<s1.size();i++)
        {
            for(int j=0;j<s2.size();j++)
            {
                for(int k=0;k<s3.size();k++)
                if(s1[i] == s2[j] && s3[k] == s2[j])
                {
                    f[i+1][j+1][k+1] = f[i][j][k]+1;
                }
                else
                {
                    f[i+1][j+1][k+1] = max(f[i+1][j+1][k],max(f[i+1][j][k+1],f[i][j+1][k+1]));
                }
            }
        }
        int res = 0;
        for(int i=0;i<s1.size();i++)
        {
            for(int j=0;j<s2.size();j++)
            {
                for(int k=0;k<s3.size();k++)
                    res = max (res,f[i+1][j+1][k+1]);
            }
        }
        cout<<res<<endl;
    }
    
}