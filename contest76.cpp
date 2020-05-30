#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        bool flag = true;
        string s;
        getline(cin,s);
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(') st.push(s[i]);
            else if(s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*') st.push(s[i]);
            else if(s[i] == ')')
            {
                if(st.size() && st.top() == '(')
                {
                    cout<<"Yes\n";
                    flag = false;
                    break;
                }
                else {
                    while (st.size() && st.top() != '(')
                    {
                        st.pop();
                    }
                    if(st.size()) st.pop();
                }
            }
        }
        if(flag) cout<<"No\n";
    }
}