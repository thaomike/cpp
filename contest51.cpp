#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int f[1003][1003];

//xanh
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>s1>>s2;
        for(int i=0;i<s1.size();i++)
        {
            for(int j=0;j<s2.size();j++)
            {
                if(s1[i] == s2[j])
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
        for(int i=0;i<s1.size();i++)
        {
            for(int j=0;j<s2.size();j++)
            {
                res = max (res,f[i+1][j+1]);
            }
        }
        cout<<res<<endl;
    }
    
}