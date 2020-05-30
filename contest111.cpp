#include<bits/stdc++.h>
using namespace std;
string s;
string res;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        cin>>s;
        res.resize(s.size());
        res[0] = s[0];
        for(int i=1;i<s.size();i++)
        {
            if(s[i] == '0') res[i] = res[i-1];
            else
            {
                if(res[i-1] == '0') res[i] = '1';
                else
                {
                    res[i] = '0';
                }
            }
        }
        cout<<res<<endl;
    }
    
}