#include<bits/stdc++.h>
using namespace std;

string s;

int main()
{
    cin>>s;
    long long res=0;
    int d[27]={};
    stack<char> st;
    stack<char> mirror;
    for(int i=0;i<s.size();i++)
    {
        if(d[s[i]-'A'] == 0)
        {
            st.push(s[i]);
            d[s[i]-'A'] = 1;
        }
        else
        {
            while(st.size() && st.top() != s[i])
            {
                mirror.push(st.top());
                res++;
                st.pop();
            }
            st.pop();
            while(mirror.size())
            {
                st.push(mirror.top());
                mirror.pop();
            }
        }
    }
    cout<<res;
}