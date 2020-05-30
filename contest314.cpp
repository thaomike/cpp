#include<bits/stdc++.h>
using namespace std;
string s;
string store[1000006];

void pre()
{
    for(long long i=0;i<=1000000;i++)
    {
        long long lapPhuong = i*i*i;
        stringstream ss;
        ss<<lapPhuong;
        string tmp;
        ss>>tmp;
        store[i] = tmp;
    }
}

int main(){
    int t;
    cin>>t;
    pre();
    // for(int i=0;i<=999424;i++) cout<<store[i]<<" ";
    while (t--)
    {
        cin>>s;
        int flag = -1;
        for(int i=1e6-1;i>=0;i--)
        {
            if(flag >= 0) break;
            int k = 0;
            if(store[i].size() > s.size()) continue;
            for(int j=0;j<s.size();j++)
            {
                if(s[j] == store[i][k])
                {
                    k++;
                    if(k == store[i].size())
                    {
                        flag = i;
                        break;
                    }
                }
            }
        }
        if(flag >= 0) cout<<store[flag]<<endl;
        else
        {
            cout<<-1<<endl;
        }
        
        /* code */
    }
    
}