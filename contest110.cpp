#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

string s;

ll bina() {
    ll tmp = 0;
    ll power2 = 1;
    for(int i=s.size()-1;i>=0;i--)
    {
        tmp += (s[i] - '0')*power2;
        power2 *= 2;
    }
    return tmp;
}

void bin(ll x) {
    stack <int> st;
    while(x>0)
    {
        st.push(x%2);
        x /= 2;
    }
    while(st.size() < s.size()) st.push(0);
    while(st.size())
    {
        cout<<st.top();
        st.pop();
    }
    cout<<endl;

}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        ll n = bina();
        ll n1 = n>>1;
        ll res = n^n1;
        bin(res);
    }
}