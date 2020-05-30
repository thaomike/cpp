#include<bits/stdc++.h>
using namespace std;
string s;
int f[50];

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>s;
        f[0] = 1; f[1] = 1;
        if(s[0] == '0')
        {
            cout<<0<<endl;
            continue;
        }
        for(int i=2;i<=s.size();i++)
        {
            if(s[i-1] == '0')
            {
                if(s[i-2] == '2' || s[i-2] == '1')
                {
                    f[i] = f[i-2];
                    continue;
                }
                else
                {
                    f[s.size()] = 0;
                    break;
                }
                
            }
            if(s[i-1] != '0') f[i] = f[i-1];
            if(s[i-2] == '1' || s[i-2] == '2' && s[i-1] <'7')
            {
                f[i] += f[i-2];
            }
        }
        cout<<f[s.size()]<<endl;
    }
    
}