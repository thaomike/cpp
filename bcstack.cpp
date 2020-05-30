#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    string s;
    cin>>s;
    while(s != "end")
    {
        if(s == "init")
        {
            while(st.size()) st.pop();
        }
        if(s == "empty")
        {
            if(st.empty()) cout<<1<<endl;
            else
            {
                cout<<0<<endl;
            }
        }
        if(s == "push")
        {
            int tmp;
            cin>>tmp;
            st.push(tmp);
        }
        if(s == "top")
        {
            if(st.size()) cout<<st.top()<<endl;
            else
            {
                cout<<-1<<endl;
            }
        }
        if(s == "pop")
        {
            if(st.size())
            {
                st.pop();
            }
        }
        if(s == "size")
        {
            cout<<st.size()<<endl;
        }
        cin>>s;
    }
}