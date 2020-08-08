#include<bits/stdc++.h>
using namespace std;

vector<string> store;

void prePross()
{
    queue<string> q;
    q.push("1");
    int  t = 10000;
    while (t--)
    {
        string slove = q.front();
        q.pop();
        store.push_back(slove);
        string next = slove + "0";
        q.push(next);
        next = slove + "1";
        q.push(next);
    }
    while (q.size())
    {
        store.push_back(q.front());
        q.pop();
    }
}

int main()
{
    int t;
    cin>>t;
    prePross();
    while (t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cout<<store[i]<<" ";
        }
        cout<<endl;
    }
    
}