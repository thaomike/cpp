#include<bits/stdc++.h>
using namespace std;
stack<int> st;

void show()
{
    stack<int> mirror;
    while (st.size())
    {
        mirror.push(st.top());
        st.pop();
    }
    while (mirror.size())
    {
        cout<<mirror.top()<<" ";
        st.push(mirror.top());
        mirror.pop();
    }
    cout<<endl;

    
}


int main()
{
    string s;
    while(cin>>s)
    {
        if(s == "push")
        {
            int tmp;
            cin>>tmp;
            st.push(tmp);
        }
        else if(s == "pop")
        {
            st.pop();
        }
        else
        {
            if(st.size()) show();
            else
            {
                cout<<"empty\n";
            }
            
        }
        
        
    }
}