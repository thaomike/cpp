#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
void process(int i, int p) {
    if(i==n) {
        if(p==k) {
            cout<<s<<endl;
        }
    }
    else {
        if(p>k) return;
        s[i] = '0'; process(i+1,p);
        s[i] = '1';
        if(p<=k) {
            process(i+1,p+1);
        }
    }
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        cin>>n>>k;
        s.resize(n);
        process(0,0);
    }
    
}