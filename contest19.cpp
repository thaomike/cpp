#include<bits/stdc++.h>
using namespace std;

int n;
vector< string > d;
string s;
stack<string> st;
stack<string> mirror;
queue<string> tmm;
// int x[11];

void process(int i) {
    string tmp;
    if(i<0) return;
    if(st.size())
    {   
        tmp = st.top();
        mirror.push(st.top());
        st.pop();
        tmp[i] = '1';
        tmm.push(tmp);
        process(i);
    }
    else
    {
        while(mirror.size())
        {
            st.push(mirror.top());
            mirror.pop();
        }
        while(tmm.size())
        {
            st.push(tmm.front());
            tmm.pop();
        }
        process(i-1);
    }
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        cin>>n;
        s.resize(n);
        d.clear();
        for(int i=0;i<n;i++) s[i] = '0';
        st.push(s);
        process(n-1);
        while(st.size())
        {
            d.push_back(st.top());
            st.pop();
        }
        for(int i=d.size()-1;i>=0;i--)
        {
            cout<<d[i]<<" ";
        }
        cout<<endl;
    }

}