#include<bits/stdc++.h>
using namespace std;
int n,s;
int t[33];
int res = INT_MAX;

void process(int tmp) {
    if(s == 0)
    {
        res = min(res, tmp);
    }
    for(int i=0;i<n;i++)
    {
        if(s >= t[i])
        {
            tmp++;
            s -= t[i];
            if(tmp < res) process(tmp);
            tmp--;
            s += t[i];
        }
    }
}

int main() {
    cin>>n>>s;
    for(int i=0;i<n;i++) cin>>t[i];
    if(s == 0)
    {
        cout<<0;
        return 0;
    }
    sort(t,t+n, greater <int> ());
    // cout<<t[0];
    process(0);
    cout<<res;
}