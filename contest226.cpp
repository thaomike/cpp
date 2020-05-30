#include<bits/stdc++.h>
using namespace std;
int k;
string s;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>k>>s;
        string tmp = s;
        sort(tmp.begin(),tmp.end(),greater<int>());
        while(k)
        {
            bool flag = true;
            for(int i=0;i<s.size();i++)
            {
                if(s[i] != tmp[i])
                {
                    for(int j=s.size()-1;j>i;j--)
                    {
                        if(tmp[i] == s[j])
                        {
                            swap(s[i],s[j]);
                            k--;
                            flag = false;
                            break;
                        }
                    }
                }
                if(flag == false) break;
            }
            if(flag) break;
        }
        cout<<s<<endl;
    }
}